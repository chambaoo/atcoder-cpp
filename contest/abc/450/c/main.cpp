#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> table;

    vector<vector<int>> area;

    rep (i, h) {
        rep (j, w) {
            char c; cin >> c;
            table[i].push_back(c);
        }
    }


    return 0;
}