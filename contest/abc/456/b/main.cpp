#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    vector<int> a(6);
    vector<int> b(6);
    vector<int> c(6);

    rep (i, 6) cin >> a[i];
    rep (i, 6) cin >> b[i];
    rep (i, 6) cin >> c[i];

    int t[] = {4, 5, 6};

    double p = 0;

    do {
        int ca = 0;
        int cb = 0;
        int cc = 0;
        
        rep (i, 6) {
            if (a[i] == t[0]) ca++;
            if (b[i] == t[1]) cb++;
            if (c[i] == t[2]) cc++;
        }

        p += ca * cb * cc;
    } while (next_permutation(t, t + 3));

    double m = 6 * 6 * 6;

    cout << p / m << endl;

    return 0;
}