#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s, t;
    cin >> s >> t;
    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }

    int slen = s.size();
    int tlen = t.size();

    if (slen > tlen) {
        cout << "No" << endl;
        return 0;
    }

    if (t.substr(0, slen) == s) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}