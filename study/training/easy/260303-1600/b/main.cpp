#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    vector<int> s(8);
    rep (i, 8) cin >> s[i];

    int t = 0;
    for (int num : s) {
        if ((t > num ) || (num % 25 != 0) || (num < 100 || num > 675)) {
            cout << "No" << endl;
            return 0;
        }
        t = num;
    }

    cout << "Yes" << endl;

    return 0;
}