#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {

    int n, l, r;
    string s;
    cin >> n >> l >> r >> s;

    vector<vector<int>> v(26);

    rep (i, n) {
        int key = s[i] - 'a';
        v[key].push_back(i);
    }

    sort(v.begin(), v.end());

    for (auto z : v) {
        cout << '=' << endl;
        for (auto y : z) cout << y << endl;
        cout << '=' << endl;
    }

    int cnt = 0;
    cout << cnt << endl;

    return 0;
}