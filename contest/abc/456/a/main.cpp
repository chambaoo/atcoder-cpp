#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int x;
    cin >> x;

    rep (ai, 6) rep (bi, 6) rep (ci, 6) {
        int a = ai + 1;
        int b = bi + 1;
        int c = ci + 1;
        if (a + b + c == x) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}