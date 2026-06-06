// https://atcoder.jp/contests/abc081/tasks/abc081_a
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for (char c : s) {
        if (c == '1') ans++;
    }

    cout << ans << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
