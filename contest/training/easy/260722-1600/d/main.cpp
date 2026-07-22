#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s, t;
    cin >> s >> t;

    int sl = s.size();
    int tl = t.size();

    if (sl >= tl) {
        rep (i, sl) {
            if (i >= tl || s[i] != t[i]) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    } else {
        rep (i, tl) {
            if (i >= sl || s[i] != t[i]) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
