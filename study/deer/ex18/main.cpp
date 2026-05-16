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

// --------------------------------
// Reference
// --------------------------------
// #パリティ
// - パリティとは？
// 	- 偶数と奇数に関する性質のこと
// 	- パズル問題では定番のテーマ
// - 可能かどうかを判定する問題の考え方
// 	- まず不可能な場合を列挙することが有効
// 		- 極端な場合を考えて具体例を作る
// 	- 不可能な場合を列挙しつくしたら、それ以外は可能であることを証明する
// - 座標を白黒模様に塗ったとき
// 	- x + y = 偶数 なら 点(x,y) は黒色
// 	- x + y = 奇数 なら 点(x,y) は白色
// - 移動時間T が 偶数 の時は、黒色座標にしか移動できない
// - 移動時間T が 奇数 の時は、白色座標にしか移動できない
