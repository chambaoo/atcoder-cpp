#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    for (char x : s) {
        if (x == '2') cout << x;
    }
    cout << endl;

    return 0;
}