#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    rep (i, n) cin >> v[i];

    rep (i, n) {
        if (v[i] < x) {
            x = v[i];
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}