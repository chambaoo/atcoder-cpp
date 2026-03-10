#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    vector<int> v(4);
    rep (i, 4) {
        char c;
        cin >> c;
        v[i] = (c - '0') - 16;
    }

    int a = abs(v[0] - v[1]);
    int b = abs(v[2] - v[3]);

    if (a >= 4) a -= 3;
    if (b >= 4) b -= 3;

    if (a == b) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}