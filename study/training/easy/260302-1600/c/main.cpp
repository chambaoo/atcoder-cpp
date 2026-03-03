#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s, t;
    cin >> s >> t;

    if (s == t) {
        cout << 0 << endl;
        return 0;
    }

    int len = s.size() > t.size() ? t.size() : s.size();
    
    rep (i, len) {
        if (s[i] == t[i]) continue;
        else {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << len + 1 << endl;

    return 0;
}