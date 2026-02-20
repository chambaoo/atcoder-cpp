#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep (i, n) cin >> a[i];

    vector<int> ans = {a[0]};

    for (int i = 1; i < n; i++) {
        int diff = a[i] - a[i - 1];

        if (diff == 1 || diff == -1) {
            ans.push_back(a[i]);
            continue;
        }
        // 前の数より2以上大きくなっている
        else if (diff > 1) {
            int s = a[i - 1] + 1;
            for (int j = s; j < a[i]; j++) {
                ans.push_back(j);
            }
        }
        else if (diff < 1) {
            int s = a[i - 1] - 1;
            for (int j = s; j > a[i]; j--) {
                ans.push_back(j);
            }
        }
        ans.push_back(a[i]);
    }

    for (int x : ans) cout << x << ' ';
    cout << endl;
    return 0;
}