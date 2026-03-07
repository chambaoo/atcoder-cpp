#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    rep (i, n) cin >> a[i];

    for (int i = 0; i < q; i++) {
        int k;
        cin >> k;

        vector<int> b(k);

        rep (j, k) cin >> b[j];

        int min = a[0];
        int x = 0;

        for (int s : b) {
            if (s == x) continue;

            auto start = a.begin() + x;
            auto end = a.begin() + s - 1;
            int t = *min_element(start, end);

            if (min > t) {
                min = t;
            }
            x = s + 1;
        }
        if (x <= (int)a.size()) {
            int t = *min_element(a.begin() + x, a.end());
            if (min > t) {
                min = t;
            }
        }

        cout << min << endl;
    }

    return 0;
}