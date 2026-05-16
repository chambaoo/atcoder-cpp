#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<int>> table(h, vector<int>(w, 0));

    rep (i, h) rep (j, w) cin >> table[i][j];

    // debug
    // for (auto x : table) {
    //     for (auto y : x) cout << y << ' ';
    //     cout << '\n';
    // }

    int q;
    cin >> q;
    vector<int> a(q);
    vector<int> b(q);
    vector<int> c(q);
    vector<int> d(q);

    rep (i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

    vector<vector<int>> summary(h, vector<int>(w, 0));

    // まず、横方向に累積和を取る
    rep (i, h) rep (j, w) {
        if (j == 0) {
            summary[i][j] = table[i][j];
            continue;
        }
        summary[i][j] = summary[i][j - 1] + table[i][j];
    }
    // 次に、縦方向に累積和を取る
    rep (j, w) rep (i, h) {
        if (i == 0) continue;
        summary[i][j] = summary[i - 1][j] + summary[i][j];
    }

    // debug
    // for (auto x : summary) {
    //     for (auto y : x) cout << y << ' ';
    //     cout << '\n';
    // }

    // それぞれ答えを求める
    rep (i, q) {
        int ai = a[i] - 1;
        int bi = b[i] - 1;
        int ci = c[i] - 1;
        int di = d[i] - 1;

        // HACK: 左上の点が端にある場合の扱いはどうする？

        int l = summary[ci][di];

        if (ai == 0 && bi == 0) {
            cout << l << endl;
            return 0;
        }

        int m = summary[ai - 1][bi - 1];
        int s = summary[ci][bi - 1];
        int t = summary[ai - 1][di];
        // cout << l << endl;
        // cout << m << endl;
        // cout << s << endl;
        // cout << t << endl;
        cout << l + m - s - t << endl;
    }
    

}


// --------------------------------
// Reference
// --------------------------------
// #累積和

