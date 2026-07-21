#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    vector<int> a(n);

    int min = -1, idx = 0;

    rep (i, n) {
        cin >> s[i] >> a[i];
        if (min < 0 || a[i] < min) {
            idx = i;
            min = a[i];
        }
    }

    rep (i, n) {
        
        if (idx >= n) {
            idx -= n;
        }
        cout << s[idx] << endl;
        idx++;
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/adt_easy_20260721_1/tasks/abc304_a
