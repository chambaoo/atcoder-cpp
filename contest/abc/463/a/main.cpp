#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    float x, y;
    cin >> x >> y;

    float a = x / 16;
    float b = y / 9;

    if (a == b) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
    // if (x / 16 == y / 9) cout << "Yes" << endl;


    // float a = x / 16;
    // float b = y / 9;

    // if (a == b) cout << "Yes" << endl;
    // else cout << "No" << endl;