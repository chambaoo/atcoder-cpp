#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    set<int> s;

    rep (i, 4) {
        int n;
        cin >> n;
        s.insert(n);
    }

    if (s.size() == 2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}