#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void) {
    int t;
    cin >> t;

    rep (itest, t) {
        int n, d;
        cin >> n >> d;

        vector<int> a(n), b(n);
        rep (i, n) cin >> a[i];
        rep (i, n) cin >> b[i];

        queue<int> q;

        rep (i, n) {
            // 卵に入荷日を書いてキューに1個ずつ入れていく
            rep (j, a[i]) q.push(i);
            // 古いほうから順に使っていく
            rep (j, b[i]) q.pop();
            // キューが空になるか、先頭の卵が期限内になるまで捨てる
            while ((!q.empty()) && (q.front() == i - d)) q.pop();
        }
        // キューに残っている卵の数を数える
        cout << ((int)(q.size())) << endl;
    }
    return 0;
}