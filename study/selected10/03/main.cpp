// https://atcoder.jp/contests/abc081/tasks/abc081_b
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep (i, n) cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;
    rep (i, n) {
        int t = a[i];
        if (t % 2 == 1) {
            cout << 0 << endl;
            return 0;
        }

        int cnt = 0;
        while (t % 2 == 0) {
            t /= 2;
            cnt++;
        }
        ans = cnt;
    }

    cout << ans << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
