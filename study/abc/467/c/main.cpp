#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n - 1);

    rep (i, n) cin >> a[i];
    rep (i, n - 1) cin >> b[i];

    vector<int> x(n);
    x[0] = 0;
    vector<int> y(n);
    y[0] = 1;

    rep (i, n - 1) {
        x[i + 1] = (x[i] + b[i]) % 2;
        y[i + 1] = (y[i] + b[i]) % 2;
    }

    int cx = 0;
    int cy = 0;
    rep (i, n) {
        if (a[i] != x[i]) cx++;
        if (a[i] != y[i]) cy++;
    }

    cout << min(cx, cy) << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/abc467/tasks/abc467_c

// A'1 = 0 として最後までA'を作る
// A'1 = 1 として最後までA'を作る
// それぞれを作るための操作回数を数える
// 小さい方を答える
