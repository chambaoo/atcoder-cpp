#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    ll x;
    int k;
    cin >> x >> k;

    rep (i, k) {
        x /= 10;
        x = round(x) * 10;
        cout << x << endl;
    }

    return 0;
}