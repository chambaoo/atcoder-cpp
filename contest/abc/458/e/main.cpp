#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    vector<int> x(3);
    rep (i, 3) cin >> x[i];

    int cnt = 0;


    do {
        if (abs(x[0] - x[1]) != 1) continue;
        if (abs(x[1] - x[2]) != 1) continue;
        ++cnt;
        // for (int i = 0; i < 3; i++) {
        //     cout << x[i] << " ";
        // }
        // cout << endl;
    } while (next_permutation(x.begin(), x.end()));

    cout << cnt % 998244353 << endl;

    return 0;
}