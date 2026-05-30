// https://atcoder.jp/contests/adt_easy_20260525_1/tasks/abc372_c
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, q;
    string s;
    cin >> n >> q >> s;

    int ans = 0;
    // 最初の文字列に ABC がいくつあるか数える
    rep (i, n - 2) {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') ans++;
    }

    rep (i, q) {
        int x;
        char c;
        cin >> x >> c;
        
        // 変更する位置を含む部分文字列を計上済みの数から一度除外する
        rep (j, 3) {
            int idx = x - 1 - j;

            if (0 <= idx && idx + 2 < n) {
                if (s[idx] == 'A' && s[idx + 1] == 'B' && s[idx + 2] == 'C') ans--;
            }
        }

        // 文字列の変更
        s[x - 1] = c;

        // 変更する位置を含む部分文字列を再度計上する
        rep (j, 3) {
            int idx = x - 1 - j;

            if (0 <= idx && idx + 2 < n) {
                if (s[idx] == 'A' && s[idx + 1] == 'B' && s[idx + 2] == 'C') ans++;
            }
        }

        cout << ans << endl;

    }


    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// #部分文字列