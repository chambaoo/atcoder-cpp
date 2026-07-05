#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, s;
    cin >> n >> s;


    int prev = 0;

    rep (i, n) {
        int t;
        cin >> t;

        if (t - prev > s) {
            cout << "No" << endl;
            return 0;
        }

        prev = t;
    }

    cout << "Yes" << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/adt_easy_20260629_2/tasks/abc408_a
