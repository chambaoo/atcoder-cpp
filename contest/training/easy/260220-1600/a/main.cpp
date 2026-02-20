#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    for (char c : s) {
        if (c == '0') cout << '1';
        else cout << '0';
    }
    cout << endl;

    return 0;
}