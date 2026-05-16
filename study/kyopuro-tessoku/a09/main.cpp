#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    vector<int> d(n);

    rep (i, n) cin >> a[i] >> b[i] >> c[i] >> d[i];

    vector<vector<int>> table(h, vector<int>(w, 0));

    // 累積和を使って差分を取るために、増加・減少する点を設定する
    rep (i, n) {
        int ai = a[i] - 1;
        int bi = b[i] - 1;
        int ci = c[i] - 1;
        int di = d[i] - 1;

        table[ai][bi]++;
        table[ci + 1][di + 1]++;
        table[ai][di + 1]--;
        table[ci + 1][bi]--;
    }

    // debug
    // for (auto x : table) {
    //     for (auto y : x) cout << y << ' ';
    //     cout << '\n';
    // }

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

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (j > 0) cout << ' ';
            cout << summary[i][j];
        }
        cout << endl;
    }
    

}


// --------------------------------
// Reference
// --------------------------------
// #累積和

