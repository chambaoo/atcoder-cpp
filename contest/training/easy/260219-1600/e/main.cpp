#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;

    if (m == 0) {
        cout << "Yes" << endl;
        return 0;
    }

    vector<int> t_count(n);

    // 各ノードがもつ辺を数える
    // takahashi
    rep (i, m) {
        int a, b;
        cin >> a >> b;

        t_count[a - 1]++;
        t_count[b - 1]++;
    }

    vector<int> a_count(n);
    // aoki
    rep (i, m) {
        int c, d;
        cin >> c >> d;

        a_count[c - 1]++;
        a_count[d - 1]++;
    }

    sort(t_count.begin(), t_count.end());
    sort(a_count.begin(), a_count.end());

    rep (i, n) {
        if (t_count[i] == a_count[i]) continue;
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;

    return 0;
}