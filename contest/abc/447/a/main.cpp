#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {

    int n, m;
    cin >> n >> m;

    if (n % 2 == 1) n++;

    bool ans = false;
    if (n / 2 >= m) ans = true;

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}