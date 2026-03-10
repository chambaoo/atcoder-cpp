#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    ll a, m, l, r;
    cin >> a >> m >> l >> r;

    // a = 0 にそろえる
    if (a >= 0) {
        l -= a;
        r -= a;
        a -= a;
    } else {
        l += a;
        r += a;
        a += a;
    }
    cout << a << endl;
    cout << m << endl;
    cout << l << endl;
    cout << r << endl;

    if (l == r && l / m == 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
        return 0;
    }

    int cnt = 0;
    if (r >= a && l <= a) {
        cnt += r / m;
        cnt += (l / m) * -1;
    } else if (r < a) {
        cnt += -l / m;
        cnt -= -r / m;
    } else if (a < l) {
        cnt += r / m;
        cnt -= l /m;
    }
    cnt++;

    cout << cnt << endl;


    return 0;
}