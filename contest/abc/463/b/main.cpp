#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    char x;
    cin >> n >> x;

    int idx = 0;
    
    if (x == 'B') idx = 1;
    else if (x == 'C') idx = 2;
    else if (x == 'D') idx = 3;
    else if (x == 'E') idx = 4;

    rep (i, n) {
        string s;
        cin >> s;

        if (s[idx] == 'o') {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
