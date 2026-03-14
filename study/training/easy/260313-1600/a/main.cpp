#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, k;
    cin >> n >> k;

    rep (i, n) {
        int a;
        cin >> a;
        if (a % k == 0) cout << a / k << ' ';
    }

    return 0;
}