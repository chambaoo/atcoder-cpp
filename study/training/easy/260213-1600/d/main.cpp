#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int h, w;
    cin >> h >> w;

    // 8方向に見つけるための設定
    // 0 1 2
    // 3   4
    // 5 6 7
    // このとき、上下方向（i）, 横方向（j）がどれだけ変化するか？を表す配列2つ
    int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    // 1行ずつ入力を受け付ける
    vector<string> s(h);

    rep (i, h) cin >> s.at(i);

    string SNUKE = "snuke";

    rep (i, h) rep (j, w) {

        // 8方向にチェックする
        rep (v, 8) {
            int ni = i;
            int nj = j;

            // 探している文字列であるかどうかを調べる
            rep (k, 5) {
                // 探す範囲外になったらやめる
                if (i < 0 || j < 0) break;
                if (i >= h || j >= w) break;

                // 探している文字列と違う文字が現れたらやめる
                if (s[i][j] != SNUKE[k]) break;
                if (k == 4) {
                    ni = i;
                    nj = j;
                    // 見つかったとき
                    rep (nk, 5) {
                        cout << i + 1 << " " << j + 1 << endl;
                    }
                    return 0;
                }
                ni += di[v];
                nj += dj[v];
            }
        }
    }

    return 0;
}
