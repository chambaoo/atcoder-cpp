#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    int mid = n / 2;

    rep (i, n) {
        if (n % 2 == 1) {
            if (i == mid) cout << '=';
            else cout << '-';
        }
        else {
            if (i == mid || i == mid - 1) cout << '=';
            else cout << '-';
        }
    }
    cout << '\n';

    return 0;
}