#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 1;
    rep (i, b) {
        ans *= a;
    }

    cout << ans << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
