// https://atcoder.jp/contests/adt_easy_20260319_2/editorial/13405
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int q;
    cin >> q;
    // 追加クエリを順に que で管理する
    queue<pair<ll, ll>> que;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            ll c, x;
            cin >> c >> x;
            que.emplace(c, x);  // (c,x) を追加
        } else {
            ll k;
            cin >> k;
            ll ans = 0;
            // 先頭から (c,x) を順に見ていく。
            while (!que.empty() && que.front().first <= k) {
                // 先頭を削除し和を加算する
                ans += que.front().first * que.front().second;
                k -= que.front().first;
                que.pop();
            }
            if (k != 0) {
                // 先頭の(c,x)について c>k なので (c-k,x)で置き換える
                que.front().first -= k;
                ans += k * que.front().second;
            }
            cout << ans << '\n';
        }
    }
}
