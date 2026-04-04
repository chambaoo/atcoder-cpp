#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

// 入力：グラフ G と、探索の視点 s
// 出力：s から各頂点への最短路長を表す配列
vector<int> BFS(const Graph &G, int s) {
    // 頂点数
    int N = (int)G.size();
    // 全頂点を 未訪問 に初期化
    vector<int> dist(N, -1);
    queue<int> que;

    // 初期条件：頂点 0 を初期頂点とする
    dist[0] = 0;
    que.push(0);

    // BFS 開始：キューが空になるまで探索を行う
    while (!que.empty()) {
        int v = que.front();
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (int x : G[v]) {
            // すでに発見済みの頂点は探索しない
            if (dist[x] != -1) continue;

            // 新たな頂点 x について距離情報を更新してキューに挿入
            dist[x] = dist[v] + 1;
            que.push(x);
        }
    }

    return dist;
}

int main() {

    // 頂点数と辺数
    int N, M;
    cin >> N >> M;

    // グラフ入力受け取り：ここでは無向グラフを想定
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // 頂点 0 を始点とした BFS
    vector<int> dist = BFS(G, 0);
    // 結果出力：各頂点の 0 からの距離を見る
    for (int v = 0; v < N; ++v) cout << v << ": " << dist[v] << endl;

    return 0;
}