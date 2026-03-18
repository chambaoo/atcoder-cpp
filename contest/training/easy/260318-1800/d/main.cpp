#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

ll powval (ll x) {
    ll i = 0;
    while (i < )
}

int main() {
    ll b;
    cin >> b;

    rep (i, b) {
        if (pow(i, i) == b) {
            cout << i << endl;
            return 0;
        }
        if (i * i >= b) break;
    }
    cout << -1 << endl;

    return 0;
}