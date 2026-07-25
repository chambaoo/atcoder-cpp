#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    rep (i, n) {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 0; i < n - 2; i++) {
        if (a[i] < a[i + 1] && a[i + 1] > a[i + 2]) ans++;
    }

    cout << ans << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
