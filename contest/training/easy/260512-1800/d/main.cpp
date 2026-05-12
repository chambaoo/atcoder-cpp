#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    rep (i, n) cin >> s[i];

    // a1 = s1
    vector<int> a(n);
    vector<int> cs(n + 1);
    
    cs[0] = 0;

    for (int i = 0; i < n; ++i) {
        a[i] = s[i] - cs[i - 1];
        cs[i] = cs[i - 1] + a[i];
    }

    for (int x : a) cout << x << ' ';

    return 0;
}