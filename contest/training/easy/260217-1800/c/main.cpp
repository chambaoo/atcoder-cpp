#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s, t;
    cin >> s >> t;

    int len = s.length();

    for (int w = len - 1; w > 1; w--) {
        int c = len / w;
        int index = c - 1;

        string str;

        while (index < len) {
            str += s[index];
            index += c;
        }

        if (str == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;

    return 0;
}