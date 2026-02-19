#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    vector<int> a(10);

    rep (i, 10) cin >> a[i];

    int ans = 0;
    int index = 0;

    rep (i, 3) {
        index = ans;
        ans = a[index];
    }

    cout << ans << endl;

    return 0;
}