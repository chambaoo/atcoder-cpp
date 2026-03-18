#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    char c1, c2, c3, c4;
    rep (i, 4) {
        cin >> c1 >> c2 >> c3 >> c4;
    }

    if (c1 != c2 && c3 != c4 && c1 == c4) cout << "No" << endl;
    else cout << "Yes" << endl;
    
    return 0;
}