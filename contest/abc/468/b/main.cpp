#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int m, d;
    string s;
    cin >> m >> d >> s;

    vector<int> g;

    rep (i, m) {
        if (s[i] == 'G') g.push_back(i);
    }

    if (g.size() == 0) {
        cout << m << endl;
        return 0;
    }

    vector<int> x(m, 0);

    for (int i = 0; i < (int)g.size(); i++) {

        int start = g[i] - d < 0 ? 0 : g[i] - d;
        int end = g[i] + d > m ? m : g[i] + d;

        for (int j = start; j <= end; j++) x[j] = 1;
    }

    int ans = 0;
    for (auto xi : x) {
        if (xi == 0) ans++;
    }
    
    cout << ans << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------


    // int m, d;
    // string s;
    // cin >> m >> d >> s;

    // vector<int> x(m, 0);


    // rep (i, (int)s.size()) {
    //     if (s[i] == 'G') {
    //         int s = i - d < 0 ? 0 : i - d;
    //         int e = i + d > m ? m : i + d;

    //         cout << s << " : " << e << endl;

    //         for (int j = s; j <= e; j++) {
    //             x[j] = 1;
    //             cout << j << " = " << x[j] << endl;
    //         }
    //     }
    // }

    // int ans = 0;
    // for (int c : x) {
    //     if (c == 1) ans++;
    // }
