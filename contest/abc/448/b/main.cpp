#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> c(m);

    rep (i, m) cin >> c[i];

    vector<int> a(n), b(n);

    rep (i, n) {
        cin >> a[i] >> b[i];
    }

    int ans = 0;
    rep (i, n) {
        int use = 0;
        if (c[a[i] - 1] >= b[i]) {
            use = b[i];
        } else {
            use = c[a[i] - 1];
        }
        c[a[i] - 1] -= use;
        ans += use;
    }

    cout << ans << endl;


    return 0;
}