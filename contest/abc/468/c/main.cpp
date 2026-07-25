#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> q(n);

    rep(i, n) cin >> p[i];
    rep(i, n) cin >> q[i];

    int ans = 0;
    do {
        vector<int> t(n);
        for (int i = 0; i < n; i++) {
            t[i] = p[i];
        }

        bool less = true;
        rep(j, n) {
            if (t[j] < q[j]) break;
            else if (t[j] == q[j]) continue;
            else {
                less = false;
                break;
            }
        }
        if (less) ans++;
        else break;
    } while (next_permutation(p.begin(), p.end()));

    if (ans - 2 < 0) cout << 0 << endl;
    else cout << ans -2 << endl;
    return 0;
}

// --------------------------------
// Reference
// --------------------------------



    // int head = n;

    // rep(i, n) {
    //     if (p[i] == q[i]) head--;
    //     else if (p[i] > q[i]) {
    //         head = -1;
    //         break;
    //     } else {
    //         break;
    //     }
    // }

    // if (head == -1) {
    //     cout << 0 << endl;
    //     return 0;
    // }

    // // cout << head << endl;
    // int ans = 0;
    // for (int i = 2; i < head; i++) {
    //     cout << p[n - i] << endl;
    //     for (int j = 1; j < i - 1; j++) {
    //         cout << p[n - j] << ", ";
    //     }
    //     cout << '\n';
    // }



    // // int ans = 0;
    // // for (int i = 1; i <= n - 1 - head; i++) {

    // //     int x = p[n - i];
    // //     cout << x << ',' ;
    // // }


