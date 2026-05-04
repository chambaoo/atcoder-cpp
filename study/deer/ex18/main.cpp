// agc086_c
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

bool solve() {
    // プラン数
    int n;
    cin >> n;

    // 前回の時刻と座標を表す変数
    int pt = 0, px = 0, py = 0;

    // nステップの移動をそれぞれ考える
    rep (i, n) {
        int t, x, y;
        cin >> t >> x >> y;

        // 前回状態との差分を取る
        int dt = t - pt;
        int dx = abs(x - px);
        int dy = abs(y - py);

        // 間に合わないときは不可能
        if (dt < dx + dy) {
            return false;
        }

        // パリティが合わないときは不可能
        if (dt % 2 != (dx + dy) % 2) {
            return false;
        }
        // 前回情報をを更新する
        pt = t;
        px = x;
        py = y;
    }

    return true;
}

int main() {
    if (solve()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
