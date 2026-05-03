#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> g(n);
    rep(i, m) {
        int u, v;
        cin >> u >> v;
        
        u--, v--;

        // グラフに辺を追加
        g[u].push_back(v);
        g[v].push_back(u);
    }

    // 初期状態の各頂点の色
    vector<int> color(n);
    rep(i, n) { cin >> color[i]; }

    // 各クエリに答える
    rep(i, q) {
        int t, x;
        cin >> t >> x;

        // 頂点番号を0-indexedに変換
        x--;

        // 頂点xの色を出力
        cout << color[x] << endl;

        if (t == 1) {
            // 頂点xに隣接する各頂点vの色を更新
            for (int v : g[x]) {
                color[v] = color[x];
            }
        } else if (t == 2) {
            int y;
            cin >> y;

            // 頂点xの色をyに更新
            color[x] = y;
        }
    }

    return 0;
}