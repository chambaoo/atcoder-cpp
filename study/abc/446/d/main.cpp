#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void) {
    int n;
    cin >> n;

    vector<int> a(n);

    rep (i, n) cin >> a[i];

    // 計算結果を保存しておく
    map<int, int> m;

    int ans = 0;

    // 先頭から順にみていく
    rep (i, n) {
        m[a[i]] = max(m[a[i]], m[a[i] - 1] + 1);
        ans = max(ans, m[a[i]]);
    }
    cout << ans << endl;

    return 0;
}