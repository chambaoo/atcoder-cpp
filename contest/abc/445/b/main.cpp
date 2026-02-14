#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<string> s(n);

    rep (i, n) cin >> s.at(i);

    int maxlen = 0;
    for (string t : s) {
        if (maxlen < t.length()) maxlen = t.length();
    }

    for (string t : s) {
        int len = t.length();

        if (len == maxlen) {
            cout << t << endl;
            continue;
        }

        int dots = (maxlen - len);
        int pre = dots / 2;
        int suf = dots / 2;

        while (pre > 0) {
            cout << '.';
            pre--;
        }

        cout << t;
        while (suf > 0) {
            cout << '.';
            suf--;
        }

        cout << '\n';

    }

    return 0;
}