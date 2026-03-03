#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    int ans = 0;

    rep (i, (int)s.size()) {
        if (s[i] != 'A') continue;
        for (int j = i; j < (int)s.size(); j++) {
            if (s[j] != 'B') continue;
            else if (s[j + (j - i)] == 'C') ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
