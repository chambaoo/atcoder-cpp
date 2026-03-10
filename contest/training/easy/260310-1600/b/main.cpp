#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep (i, n) cin >> s[i];

    int cnt = 0;
    for (string x : s) {
        if (x == "For") cnt++;
    }
    if (cnt > n / 2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}