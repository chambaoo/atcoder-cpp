#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int a, b;
    cin >> a >> b;

    rep (i, 10) {
        if (i == a + b) continue;
        else {
            cout << i << endl;
            break;
        }
    }

    return 0;
}