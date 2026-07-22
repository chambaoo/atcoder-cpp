#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    map<int, int> mx;
    map<int, int> my;
    rep (i, 3) {
        int x, y;
        cin >> x >> y;
        mx[x]++;
        my[y]++;
    }

    for (auto x : mx) {
        if (x.second == 1) cout << x.first << ' ';
    }

    for (auto y : my) {
        if (y.second == 1) cout << y.first << endl;
    }


    return 0;
}

// --------------------------------
// Reference
// --------------------------------
