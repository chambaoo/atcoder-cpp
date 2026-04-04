#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int m, d;
    cin >> m >> d;

    bool ans = false;
    if (m == 1) {
        if (d == 7) ans = true;
    } else if (m < 10 && m % 2 == 1) {
        if (d == m) ans = true;
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}