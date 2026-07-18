#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep (i, n) {
        int a, b;
        string s;
        cin >> a >> b >> s;

        int ex = b - a;

        if (s == "keep") {
            ans += ex;
        }
    }

    cout << ans << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
