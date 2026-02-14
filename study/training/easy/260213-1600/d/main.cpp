#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int h, w;
    cin >> h >> w;

    // 1行ずつ入力を受け付ける
    vector<string> s(h);

    rep (i, h) cin >> s.at(i);

    string SNUKE = "snuke";

    // 右方向に見つけるまではこれでOK.
    // TODO: 8方向すべてに対応させる
    rep (i, h) rep (j, w) {

        rep (k, 5) {
            // 探す範囲外になったらやめる
            if (j >= w) break;

            // 探している文字列と違う文字が現れたらやめる
            if (s[i][j] != SNUKE[k]) break;
            if (k == 4) {
                //found
            }
            j++;
        }
    }

    return 0;
}
