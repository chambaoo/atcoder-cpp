#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, q;
    cin >> n >> q;

    map<int, map<int, int>> mb;
    map<int, map<int, int>> mc;

    rep (i, q) {
        int t, box, card;
        cin >> t;

        if (t == 1) {
            cin >> card >> box;
            mb[box][card]++;
            mc[card][box]++;
        } else if (t == 2) {
            cin >> box;
            for (auto x : mb[box]) {
                rep (j, x.second) cout << x.first << ' ';
            }
            cout << '\n';
        } else {
            cin >> card;
            for (auto x : mc[card]) {
                cout << x.first << ' ';
            }
        }
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/adt_easy_20260721_1/tasks/abc298_c
