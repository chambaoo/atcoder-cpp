#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> G(n, vector<int>(n, 0));
    vector<vector<int>> H(n, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        G[a][b] = G[b][a] = 1;
    }
    for (int i = 0; i < m; i++) {
        int c, d;
        cin >> c >> d;
        --c; --d;
        H[c][d] = H[d][c] = 1;
    }

    vector<int> p(n);
    iota(p.begin(), p.end(), 0);

    do {
        bool ok = true;
        for (int i = 0; i < n && ok; i++) {
            for (int j = 0; j < n; j++) {
                if (G[i][j] != H[p[i]][p[j]]) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            cout << "Yes\n";
            return 0;
        }
    } while (next_permutation(p.begin(), p.end()));

    cout << "No\n";
    return 0;
}
