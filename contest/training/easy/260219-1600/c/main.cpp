#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool is_correct(char i, char j) {
    if (i == 'W' && j == 'L') return true;
    if (i == 'L' && j == 'W') return true;
    if (i == 'D' && j == 'D') return true;
    if (i == '-' && j == '-') return true;
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<string> a(n);
    rep (i, n) cin >> a[i];

    rep (i, n) rep (j, n) {
        if (!is_correct(a[i][j], a[j][i])) {
            cout << "incorrect" << endl;
            return 0;
        }
    }

    cout << "correct" << endl;

    return 0;
}