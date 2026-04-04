#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    rep (i, n) {
        cin >> a[i] >> b[i];
    }

    int m;
    cin >> m;

    vector<int> s(m);

    rep (i, m) cin >> s[i];


    return 0;
}