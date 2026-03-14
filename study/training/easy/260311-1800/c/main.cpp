#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s;
    cin >> s;
    int len = s.size();

    set<string> m;

    for (int i = 0; i < len; i++) {
        // j は、切取る長さ
        for (int j = 1; i + j <= len; j++) {
            m.insert(s.substr(i, j));
        }
    }

    cout << m.size() << endl;

    return 0;
}