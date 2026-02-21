#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> juice(m, 1);

    rep (i, n) {
        int l;
        cin >> l;

        vector<int> x(l);

        rep (j, l) cin >> x[j];

        int ans = 0;

        for (int t : x) {
            if (juice[t - 1] == 1) {
                ans = t;
                juice[t - 1]--;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}