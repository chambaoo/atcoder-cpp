#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s;
    int n;
    cin >> s >> n;

    string ans = s.substr(n, s.size() - 2 * n);

    cout << ans << endl;

    return 0;
}