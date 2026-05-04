// agc024_a
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    if (k % 2 == 0) {
        cout << a - b << endl;
    } else {
        cout << b - a << endl;
    }

    return 0;
}
