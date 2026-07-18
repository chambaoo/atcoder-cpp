#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int h, w;
    cin >> h >> w;

    if (w * 100 * 100 / h / h >= 25) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
