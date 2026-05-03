// abc122_c
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, q;
    string s;
    cin >> n >> q >> s;
    
    // 累積和を計算する
    vector<int> cs(n + 1, 0);
    for (int i = 1; i < n; i++) {
        cs[i + 1] = cs[i] + (s.substr(i - 1, 2) == "AC" ? 1 : 0);
    }

    // 各クエリに答える
    rep(i, q) {
        int l, r;
        cin >> l >> r;

        cout << cs[r] - cs[l] << endl;

        // TODO: 本書の回答では、以下のようになっている。なぜ？？
        // --l;
        // cout << cs[r] - cs[l + 1] << endl;

    }

    return 0;
}
