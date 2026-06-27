#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> t;

    int top = 99, bottom = 0, left = 99, right = 0;
    rep (i, h) {
        string s;
        cin >> s;

        for (int j = 0; j < w; j++) {
            if (s.at(j) == '#') {
                top = min(top, i);
                bottom = max(bottom, i);
                left = min(left, j);
                right = max(right, j);
            }
        }

        t.push_back(s);
    }

    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            cout << t[i][j];
        }
        cout << '\n';
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
