#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    rep (i, n) cin >> v[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            string t = v[i] + v[j];
            int m = t.size();
            for (int k = 1; k <= m; k++) {
                if (t[k] == t[m + 1 - k]) {
                    cout << "Yes" << endl;
                    return 0;
                }

            }
        }
    }

    cout << "No" << endl;

    return 0;
}