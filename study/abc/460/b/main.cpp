// https://atcoder.jp/contests/abc460/editorial/21008
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long


// int main() {
//   int t;
//   cin >> t;

//   while (t--) {
//     ll x1, y1, r1, x2, y2, r2;
//     cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
//     auto sq = [](ll x) { return x * x; };

//     auto L = sq(r1 - r2);
//     auto M = sq(x1 - x2) + sq(y1 - y2);
//     auto R = sq(r1 + r2);
//     cout << (L <= M and M <= R ? "Yes" : "No") << "\n";
//   }
// }

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int t;
    cin >> t;

    rep (i, t) {
        ll x1, y1, x2, y2, r1, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        ll a2 = abs(x1 - x2) * abs(x1 - x2);
        ll b2 = abs(y1 - y2) * abs(y1 - y2);
        ll c2 = a2 + b2;
        // cout << a * a + b * b << "  " << int(hypot(a, b)) << endl;
        // double c = hypot(a, b);


        if (max(r1, r2) > min(r1, r2) + abs(x1 - x2)) {
            cout << "No" << endl;
            continue;
        }

        if (c2 <= (r1 + r2) * (r1 + r2)) cout << "Yes" << endl;
        else cout << "No" << endl;

    }

    return 0;
}
// --------------------------------
// Reference
// --------------------------------
// https://manabitimes.jp/math/745
// 平方根を使うと、誤差の影響で謝った答えが出る可能性があるので注意
// 自分のWAになる解答も、平方根を取らずに、二乗のままで計算させることでACとなった
