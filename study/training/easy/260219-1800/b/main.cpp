#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    int len = s.size();

    for (int i = 0; i < len; i++) {
        if (isupper(s[i])) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}