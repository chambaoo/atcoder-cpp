#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    string s;
    cin >> n >> s;

    int len = s.size();

    string ans;

    rep (i, n - len) {
        ans += 'o';
    }

    cout << ans + s << endl;

    return 0;
}