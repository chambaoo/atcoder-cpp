#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    int x = 10000;
    int y = 10000;

    rep (i, n) {
        int a, b;
        string s;
        cin >> a >> b >> s;

        x -= b;
        y -= b;

        int ex = b - a;

        if (s == "take") {
            x += ex;
        }
        y += ex;
    }

    cout << y - x << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
