#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    rep (i, n) cin >> a[i];

    vector<int> sum(n);
    sum[0] = a[0];
    for (int i = 1; i < n; ++i) {
        sum[i] = sum[i - 1] + a[i];
    }

    vector<int> l(q);
    vector<int> r(q);

    rep (i, q) cin >> l[i] >> r[i];

    rep (i, q) {
        int li = l[i] - 1;
        int ri = r[i] - 1;

        cout << sum[ri] - sum[li - 1] << endl;
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// #累積和

