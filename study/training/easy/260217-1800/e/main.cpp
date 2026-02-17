#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s, t;
    cin >> s >> t;

    int len = s.length();

    rep (i, len) {
        if (s[i] == t[i]) continue;
        else {
            cout << i + 1 << endl;
            return 0;
        }
    }
    // ここまで来たということは、s = aaa, t = aaab のような状態
    cout << t.size() << endl;

    return 0;
}