#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // w = 何文字ごとに区切るか
    for (int w = 1; w < (int)s.size(); ++w) {
        // c = w 文字ごとに区切ったとき、長さが c 以上の文字列の c 文字目
        for (int c = 0; c < w; ++c) {
            
            string now = "";

            for (int i = c; i < (int)s.size(); i += w) {
                now += s[i];
            }

            if (now == t) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
