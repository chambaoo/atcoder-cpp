#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {

    int n;
    cin >> n;

    vector<vector<int>> gift(n, vector<int>(0, 0));

    rep (i, n) {
        int k;
        cin >> k;

        rep (j, k) {
            int a;
            cin >> a;

            gift[a - 1].push_back(i);
        }
    }

    rep (i, n) {
        auto g = gift[i];
        cout << g.size() << ' ';
        for (int sender : g) {
            cout << sender + 1 << ' ';
        }
        cout << '\n';
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/abc462/tasks/abc462_b