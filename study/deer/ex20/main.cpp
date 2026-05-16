#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
#define INF 1LL << 60

int main() {
    int n;
    cin >> n;

    int t = 0;
    int c1 = 0, c2 = 0, c3 = 0;
    rep(i, n) {
        string s;
        cin >> s;

        // 文字列中に含まれる 'AB' の個数を数える
        for (int j = 0; j < (int)s.size() - 1; j++) {
            if (s[j] == 'A' && s[j + 1] == 'B') {
                t++;
            }
        }

        // pattern 1
        if (s[0] == 'B' && s.back() == 'A') {
            c1++;
        }
        // pattern 2
        else if (s.back() == 'A') {
            c2++;
        }
        else if (s[0] == 'B') {
            c3++;
        }
    }
    // c2, c3 の値に応じて出力
    if (c2 == 0 && c3 == 0) {
        cout << t + max(c1 - 1, 0) << endl;
    } else {
        cout << t + min(c2, c3) + c1 << endl;
    }

    return 0;
}


// --------------------------------
// Reference
// --------------------------------
// #ペアリング
// - 上界を見積もる
// - 実際に上界を達成できることを示す
// - 上界とは？
// 	- 理論的にこれより多く作るのは絶対に不可能だという値
