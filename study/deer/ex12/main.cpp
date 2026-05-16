// abc085_b
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    // 自分なら set を使うけど、バケットを使って解いてみる例題
    // 次のページには、別解で出ていた。
    int n;
    cin >> n;

    // バケットは [100] でアクセスするために
    // 101個、0で初期化する
    vector<int> b(101, 0);

    rep (i, n) {
        int d;
        cin >> d;

        b[d] = 1;
    }

    int ans = 0;
    for (auto v : b) ans += v;

    cout << ans << endl;

    return 0;
}


// --------------------------------
// Reference
// --------------------------------
// #連想配列 #バケット #度数分布
// - バケットとは？
// 	- 配列Aを度数分布に変換したもの
// 		- `num[v] = 配列A の中の値 v の個数`
// - バケットはいつ使う？
// 	- 配列A に値 v が含まれるかどうかを判定する
// 	- 配列A に含まれる値は何種類あるかを答える
// 	- 配列A の要素がすべて異なるかどうかを判定する
