#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    ll n, k;
    cin >> n >> k;

    ll ans = 1;
    rep (i, n) {
        ll a;
        cin >> a;
        ans *= a;

        ll len = to_string(ans).size();

        if (len >= k + 1) {
            ans = 1;
        }
    }
    cout << ans << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
