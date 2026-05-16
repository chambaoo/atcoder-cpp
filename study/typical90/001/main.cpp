// https://atcoder.jp/contests/typical90/tasks/typical90_a
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    ll N, L, K;
    cin >> N >> L >> K;

    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    // 判定問題
    // すべての長さを x 以上にすることが可能か？
    // bool check(ll x) のような関数を、ラムダ式で書いているよ
    auto check = [&](ll x) -> bool {
        // 長さ x 以上のピースを何個作れたか
        ll num = 0;
        // 前回切った位置
        ll pre = 0;
        for (int i = 0; i < N; ++i) {
            // x を超えたら切断
            // 最短で条件を満たした瞬間に切る(貪欲法)
            if (A[i] - pre >= x) {
                ++num;
                pre = A[i];
            }
        }
        // 最後の切れ目まではループで処理しているが、
        // 最後の切れ目から羊羹の末端までのピースだけ未判定で残っている
        // 最後のピースが x 以上なら加算
        if (L - pre >= x) ++num;

        // K+1 個以上作れたなら、trueを返す
        return (num >= K + 1);
    };

    // 二分探索
    // left = OK が確定している位置
    // right = NG が確定している位置
    ll left = -1, right = L + 1;

    // OK と NG の境目を探す
    while (right - left > 1) {
        // mid = 答え候補
        ll mid = (left + right) / 2;
        // 候補の数で、長さを作れたら、OKの位置を更新する
        if (check(mid)) left = mid;
        // 候補の数で、長さを作れなかったら、NGの位置を更新する
        else right = mid;
    }
    cout << left << endl;


    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// #貪欲法 #二分探索
// 最大化する問題を判定問題にして解く
// 「最小値」を最大化する問題では二分探索を使うことが多い
// 貪欲法との組み合わせ
// どこで切るかを考えるのではなく、切れるところで最短で切る！
