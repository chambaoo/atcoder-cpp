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