#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    ll x, k;
    cin >> x >> k;

    ll pow10 = 1;

    for (ll i = 0; i < k; i++) {
        // 10^k の位を、1の位にする
        x /= pow10;

        // xの1の位を、xを10で割ったあまりとする = m
        ll m = (x % 10);
        // m が4以下なら切り捨て
        if (m <= 4) {
            x -= m;
        } else {
            // m が5以上なら切り上げ
            x += (10 - m);
        }
        x *= pow10;
        pow10 *= 10;
    }
    cout << x << "\n";
    return 0;
}
// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/adt_easy_20260629_2/tasks/abc273_b
