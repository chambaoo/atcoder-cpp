#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        cout << i;
        if (i != 1) cout << ',';
        else cout << '\n';
    }
    return 0;
}