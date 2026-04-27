#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int w, b;
    cin >> w >> b;

    int wg = w * 1000;

    int bn = 0;
    int ans = 0;

    while (wg >= bn) {
        ans++;
        bn = ans * b;
    }

    cout << ans << endl;



    return 0;
}