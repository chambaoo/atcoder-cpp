#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int h, w;
    cin >> h >> w;

    const char BK = '#';
    const char WH = '.';

    rep (i, h) {
        rep (j, w) {
            if (i == 0 || i == h - 1) cout << BK;
            else if (j == 0 || j == w - 1) cout << BK;
            else cout << WH;
        }
        cout << '\n';
    }

    return 0;
}