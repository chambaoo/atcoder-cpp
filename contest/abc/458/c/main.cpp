#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s;
    cin >> s;

    ll ans = 0;

    vector<int> idx;
    int len = s.length();
    rep (i, len) {
        if (s[i] == 'C') idx.push_back(i);
    }

    for (auto x : idx) {
        ans++;

        int a = x;
        int b = len - 1 - x;

        ans += min(a, b);
    }

    cout << ans << endl;

    return 0;
}


// --------------------------------
// Reference
// --------------------------------
// #部分文字列
// https://atcoder.jp/contests/abc458/tasks/abc458_c

