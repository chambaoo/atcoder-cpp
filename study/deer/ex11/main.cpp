// abc085_c
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, y;
    cin >> n >> y;

    int a = -1;
    int b = -1;
    int c = -1;

    // 3つではなく、1つか2つを動かして考える
    rep (ai, n + 1) rep (bi, n + 1) {
        // c は自動的に決まる
        int ci = n - ai - bi;

        if (ci < 0 || ci > n) continue;

        if (10000 * ai + 5000 * bi + 1000 * ci == y) {
            a = ai;
            b = bi;
            c = ci;
        }
    }

    cout << a << ' ' << b << ' ' << c << endl;

    return 0;
}