#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;
    map<int, int> points;

    rep (i, n) {
        int x, y;
        cin >> x >> y;
        points.insert({x, y});
    }

    int ans = 0;
    int min_y = 0;
    for (auto p : points) {
        if (min_y == 0 || min_y > p.second) {
            ans++;
            min_y = p.second;
        }
    }
    
    cout << ans << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/abc462/tasks/abc462_c



        // cout << p.first << " : " << p.second << ", miny : " << min_y << endl;
    // for (auto a : p) {
    //     cout << a.first << ',' << a.second << endl;
    // }
