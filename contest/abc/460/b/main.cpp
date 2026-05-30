#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int t;
    cin >> t;

    rep (i, t) {
        int x1, y1, x2, y2;
        double r1, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        ll a = abs(x1 - x2);
        ll b = abs(y1 - y2);
        cout << a * a + b * b << "  " << int(hypot(a, b)) << endl;
        double c = hypot(a, b);


        if (max(r1, r2) > min(r1, r2) + a) {
            cout << "No" << endl;
            continue;
        }

        if (c <= r1 + r2) cout << "Yes" << endl;
        else cout << "No" << endl;

    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
