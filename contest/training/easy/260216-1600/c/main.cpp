#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> s(h);

    rep (i, h) cin >> s.at(i);

    rep (i, h) {
        rep (j, w) {
            if (s[i][j] == '.') continue;
            
            // 黒の場合だけ、左右上下の黒の数を調べる
            int count = 0;

            // is left exist?
            if (j > 0) {
                if (s[i][j - 1] == '#') count++;
            }
            // is right exist?
            if (j < w - 1) {
                if (s[i][j + 1] == '#') count++;
            }
            // is top exist?
            if (i > 0) {
                if (s[i - 1][j] == '#') count++;
            }
            // is bottom exist?
            if (i < h - 1) {
                if (s[i + 1][j] == '#') count++;
            }

            if (count != 2 && count != 4 ) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}