// https://atcoder.jp/contests/typical90/tasks/typical90_c
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

using Graph = vector<vector<int>>;

// 頂点 s から DFS (ここではスタックを使う)
vector<int> dfs(const Graph &G, int s) {
    int N = G.size();
    
    // 頂点 s からの距離を調べる
    // まだ訪問していない = -1 で初期化
    vector<int> dist(N, -1);
    // 自分自身までの距離は 0
    dist[s] = 0;

    // スタックで DFS
    stack<int> st({s});
    while (!st.empty()) {
        // 現在の頂点 v
        int v = st.top();
        st.pop();

        // 隣接する頂点を調べて、未訪問なら進むための候補に追加する
        for (auto nv: G[v]) {
            if (dist[nv] == -1) {
                st.push(nv);
                // 木構造なので、親までの距離 + 1
                dist[nv] = dist[v] + 1;
            }
        }
    }

    // 各頂点までの距離を返す
    return dist;
}

int main() {
    int N;
    cin >> N;

    Graph G(N);

    for (int i = 0; i < N-1; ++i) {
        int a, b;
        cin >> a >> b;
        --a, --b;

        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 頂点 0 から各頂点までの距離を調べる
    auto dist0 = dfs(G, 0);

    // 距離最大の点を求める
    // mx = 最大距離
    int mx = -1;
    // mx = 最大距離になる頂点
    int mv = -1;
    for (int v = 0; v < N; ++v) {
        if (mx < dist0[v]) {
            mx = dist0[v];
            mv = v;
        }
    }

    // 頂点 mv から DFS
    auto distmv = dfs(G, mv);

    // その最大値を求める
    mx = -1;
    for (int v = 0; v < N; ++v) {
        // 木の直径を調べる
        mx = max(mx, distmv[v]);
    }
    cout << mx + 1 << endl;
}