#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s;
    cin >> s;

    for (char c : s) {
        if (c >= '0' && c <= '9') cout << c;
    }
    cout << '\n';

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/abc462/tasks/abc462_a