#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<vector<ll>> v(n - 1);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ll c;
            cin >> c;
            v[i].push_back(c);
        }
    }

    for (int a = 1; a <= n - 2; a++) {
        for (int b = a + 1; b <= n - 1; b++) {
            for (int c = b + 1; c <= n; c++) {

                ll x = v[a-1][b-a-1] + v[b-1][c-b-1];
                ll y = v[a-1][c-a-1];

                if (x < y) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}



    
    // for (auto x : v) {
    //     for (auto y : x) {
    //         cout << y << endl;
    //     }
    //     cout << '\n';
    // }