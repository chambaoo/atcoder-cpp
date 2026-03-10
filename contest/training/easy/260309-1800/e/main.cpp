#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    string td;
    cin >> n >> td;

    int tdlen = td.size();

    vector<string> s(n);
    rep (i, n) cin >> s[i];

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        int slen = s[i].size();
        int cnt = 0;
        
        if (td == s[i]) ans.push_back(i + 1);
        else if (tdlen - 1 == slen) {
            int k = 0;
            for (int j = 0; j < tdlen; j++) {
                if (s[i][k] == td[j]) {
                    k++;
                    continue;
                } else {
                    cnt++;
                }
                if (cnt > 1) break;
            }
            if (cnt == 1) ans.push_back(i + 1);
        } else if (tdlen + 1 == slen) {
            int k = 0;
            for (int j = 0; j < tdlen; j++) {
                if (s[i][k] == td[j]) {
                    k++;
                    continue;
                } else {
                    cnt++;
                }
                if (cnt > 1) break;
            }
            if (cnt == 1) ans.push_back(i + 1);
        } else if (tdlen == slen) {
            for (int j = 0; j < slen; j++) {
                if (s[i][j] != td[j]) {
                    cnt++;
                }
                if (cnt > 1) break;
            }
            if (cnt == 1) ans.push_back(i + 1);
        } else {
            continue;
        }
    }
    cout << ans.size() << endl;
    for (int a : ans) cout << a << ' ';

    return 0;
}