// abc137_c
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    // n = 10^5, n_C_2 = n * (n - 1) / 2 > int 32bit
    map<string, ll> m;

    rep (i, n) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());

        ++m[s];
    }

    // 集計
    ll ans = 0;
    for (auto v : m) {
        ll num = v.second;
        
        ans += num * (num - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}


// --------------------------------
// Reference
// --------------------------------
// #連想配列 #バケット #度数分布
// - 配列のインデックスでは正の整数しか使えないため、文字列を扱う場合には連想配列を使う
// 	- アナグラムを考える
