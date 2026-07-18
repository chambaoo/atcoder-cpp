#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n - 1);
    vector<int> x(n - 1);
    map<int, int> fcnt;

    rep (i, n) {
        cin >> a[i];
        if (i > 0) {
            x[i - 1] = (a[i - 1] + a[i]) % 2;
        }
    }

    int idx = 0;
    rep (i, n - 1) {
        cin >> b[i];
        if (b[i] == x[i]) {
            idx = i + 1;
        } else {
            fcnt[idx]++;
        }
    }

    int ans = 0;


    for (auto p : fcnt) {
        if (p.second % 2 == 0) {
            ans += p.second / 2;
        } else {
            ans += p.second / 2 + 1;
        }
    }

    cout << ans << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------




    // int ans = 0;

    // rep (i, n - 2) {
    //     // 一緒なら a[i], a[i + 1] 確定
    //     if (b[i] == x[i]) continue;
    //     else {
    //         // 違うときは一個次を見る
    //         if (b[i + 1] == x[i + 1]) {
    //             // 次が一緒なら、a[i + 1]を変えて確定
    //         }
    //     }
    // }
    // if (b[n - 1] != x[n - 1]) {
    //     ans++;
    // }



