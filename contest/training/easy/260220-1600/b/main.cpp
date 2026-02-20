#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    rep (i, n) cin >> a[i];

    for (int i = n - k; i < n; i++) cout << a[i] << ' ';
    rep (i, n - k) cout << a[i] << (i == n - k - 1 ? '\n' : ' ');

    return 0;
}