#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, x;
    cin >> n >> x;

    int sum = 0;

    rep (i, n) {
        int s;
        cin >> s;
        if (s <= x) sum += s;
    }

    cout << sum << endl;

    return 0;
}