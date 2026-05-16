// abc125_d
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
#define INF 1LL << 60

int main() {
    int n;
    cin >> n;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    // マイナスの個数
    int minus_count = 0;

    ll sum_abs = 0;
    // 十分大きな値
    ll min_abs = INF;

    rep (i, n) {
        if (a[i] < 0) {
            minus_count++;
        }

        sum_abs += abs(a[i]);
        min_abs = min(min_abs, abs(a[i]));
    }

    // マイナスの個数が偶数の場合、すべての要素を正にすることができる
    if (minus_count % 2 == 0) {
        cout << sum_abs << endl;
    } else {
        // マイナスの個数が奇数の場合、絶対値が最小の要素を負の数として残す
        cout << sum_abs - 2 * min_abs << endl;
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// # 言い換え
// - 操作に関する問題は、決まった解答パターンを持たず、柔軟な思考を必要とする
// 	- 操作をわかりやすく言い換える
// 	- 操作によって作れるものを特徴付ける
// - -1 を掛ける、＋と－を入れ替える操作
// 	- 元の数列が－が奇数個ならば、0個（偶数個）にすることはできない
