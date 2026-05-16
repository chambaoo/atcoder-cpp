#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int h, w;
    cin >> h >> w;

    rep (i, h) {
        rep (j, w) {
            int x = 4;
            if (i == 0) --x;
            if (j == 0) --x;
            if (i == h - 1) --x;
            if (j == w - 1) --x;
            cout << x;
            if (j < w - 1) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}