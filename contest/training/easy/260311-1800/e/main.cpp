#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    map<float, vector<int>> m;

    rep (i, n) {
        float a, b;
        cin >> a >> b;

        float p = a / (a + b);

        auto tmp = m[p];
        tmp.push_back(i + 1);

        m.insert({p, tmp});
    }

    for (auto x : m) {
        cout << x.first << endl;
        for (int y : x.second) {
            cout << y << ' ';
        }
    }

    return 0;
}