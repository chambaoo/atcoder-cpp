#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, k;
    ll a, y = 1, x = 1;

    cin >> n >> k;

    for (int i = 0; i < k; i++) y *= 10;
    y--;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (x > (y / a))
            x = 1;
        else
            x *= a;
    }

    cout << x << endl;
    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/adt_easy_20260630_2/editorial/13042
// TODO: 解説がまだ腹落ちしていない。
