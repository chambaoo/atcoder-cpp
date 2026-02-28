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

    int si = 0;
    int ti = 0;
    int se = s.size() - 1;
    int te = t.size() - 1;

    char a = 'A';
    int ans = 0;

    while (true) {
        
        if (si > se && ti > te) {
            break;
        }

        if (si > se) {
            if (t[ti] == a) {
                ans++;
                ti++;
                continue;
            } else {
                ans = -1;
                break;
            }
        }
        if (ti > te) {
            if (s[si] == a) {
                ans++;
                si++;
                continue;
            } else {
                ans = -1;
                break;
            }
        }

        if (s[si] == a) {
            if (s[si] == t[ti]) {
                si++;
                ti++;
                continue;
            } else {
                ans++;
                si++;
                continue;
            }
        } else {
            if (t[ti] == a) {
                ans++;
                ti++;
                continue;
            } else if (s[si] == t[ti]) {
                si++;
                ti++;
                continue;
            } else if (s[si] != t[ti]) {
                ans = -1;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}