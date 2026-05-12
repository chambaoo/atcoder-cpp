#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep (i, n) cin >> a[i];

    int cnt = 1;
    int prev = a[0];
    
    for (int i = 1; i < n; ++i) {
        if (prev != a[i]) cnt = 1;
        else cnt++;
        if (cnt >= 3) {
            cout << "Yes" << endl;
            return 0;
        }
        prev = a[i];
    }
    cout << "No" << endl;

    return 0;
}