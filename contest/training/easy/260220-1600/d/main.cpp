#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<int, vector<int>> table(n, vector<int>(4));

    rep (i, n) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> row = {a, b, c, d};
        table[i][1] = a;
    }

    return 0;
}