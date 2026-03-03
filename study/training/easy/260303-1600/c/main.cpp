#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int f(int a) {
    if (a == 0) return 1;

    int sum = 0;
    while (a != 0) {
        cout << "sum + " << a % 10 << endl;
        sum = sum + a % 10;
        a /= 10;
    }

    rep (i, a) sum += f(a);

    return sum;
}

int main() {
    int n;
    cin >> n;

    int ans = 0;
    ans = f(n);
    cout << ans << endl;
    return 0;
}
