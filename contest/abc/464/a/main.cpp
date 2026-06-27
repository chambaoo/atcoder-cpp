#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s;
    cin >> s;

    int east = 0, west = 0;
    for (char c : s) {
        if (c == 'E') east++;
        else west++;
    }
    if (west < east) cout << "East" << endl;
    else cout << "West" << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
