#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    vector<int> b(m);

    rep (i, n) cin >> a[i] >> b[i];

    set<int> s;

    rep (i, n) {
        s.insert(i + 1);
    }

    rep (i, n) {
        s.erase(b[i]);
    }

    if (s.size() == 1) cout << *s.begin() << endl;
    else cout << -1 << endl;

    return 0;
}