#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    char c1, c2;
    string s;
    cin >> n >> c1 >> c2 >> s;

    for (char c : s) {
        if (c != c1) cout << c2;
        else cout << c;
    }
    cout << '\n';

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
