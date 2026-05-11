// https://atcoder.jp/contests/typical90/tasks/typical90_d
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<int>> table(h, vector<int>(w, 0));
    vector<int> rows(h, 0);
    vector<int> cols(w, 0);

    rep(i, h) {
        rep(j, w) {
            cin >> table[i][j];
            rows[i] += table[i][j];
            cols[j] += table[i][j];
        }
    }

    rep(i, h) {
        rep(j, w) {
            cout << rows[i] + cols[j] - table[i][j];
            if (j < w - 1)
                cout << ' ';
            else
                cout << '\n';
        }
    }

    return 0;
}