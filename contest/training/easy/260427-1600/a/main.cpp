#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int k;
    cin >> k;

    int h = k / 60 + 21;
    int m = k % 60;
    cout << h << ':';
    if (m < 10) cout << 0 << m << endl;
    else cout << m << endl;

    return 0;
}