#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> c(n);
    vector<int> r(n);

    bool q1 = false;

    rep (i, n) {
        cin >> c[i];
        if (c[i] == t) q1 = true;
    }
    rep (i, n) cin >> r[i];

    if (!q1) t = c[0];

    int max = 0;
    int p = 0;
    rep (i, n) {
        if (c[i] != t) continue;
        if (max < r[i]) {
            max = r[i];
            p = i + 1;
        }
    }

    cout << p << endl;

    return 0;
}