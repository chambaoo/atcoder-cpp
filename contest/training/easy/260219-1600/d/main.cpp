#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    int sum = 0;
    rep (i, n) {
        cin >> a[i];
        sum += a[i];
    }

    for (int x : a) {
        if (sum - x == m) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}