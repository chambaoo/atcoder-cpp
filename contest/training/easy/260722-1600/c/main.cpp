#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    rep (i, n) {
        cin >> a[i];
    }

    int cnt = a.size();
    int ans = 0;

    while(cnt > 1) {
        sort(a.begin(), a.end(), greater<>());
        a[0]--;
        a[1]--;
        if (a[0] == 0) cnt--;
        if (a[1] == 0) cnt--;
        ans++;
    }

    cout << ans << endl;


    return 0;
}

// --------------------------------
// Reference
// --------------------------------
