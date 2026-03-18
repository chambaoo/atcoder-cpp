#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {

    int h, w, q;
    cin >> h >> w >> q;

    rep (i, q) {
        int type;
        cin >> type;
        if (type == 1) {
            int r;
            cin >> r;

            cout << w * r << endl;

            h -= r;

        } else {
            int c;
            cin >> c;
            
            cout << h * c << endl;

            w -= c;
        }
    }

    return 0;
}