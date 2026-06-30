#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> c(n);
    map<string, int> d;
    vector<int> p(m + 1);

    rep (i, n) cin >> c[i];
    rep (i, m) {
        string k;
        cin >> k;
        d.emplace(k, i + 1);
    }
    rep (i, m + 1) cin >> p[i];

    int ans = 0;
    rep (i, n) ans += p.at(d[c[i]]);

    cout << ans << endl;


    return 0;
}

// --------------------------------
// Reference
// --------------------------------
