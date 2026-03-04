#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    vector<int> v(3);
    int a, b;
    cin >> a >> b;

    v[a - 1] = 1;
    v[b - 1] = 1;

    int sum = accumulate(v.begin(), v.end(), 0);

    if (sum < 2) {
        cout << -1 << endl;
        return 0;
    }

    rep (i, 3) {
        if (v[i] == 0) cout << i + 1 << endl;
    }

    return 0;
}