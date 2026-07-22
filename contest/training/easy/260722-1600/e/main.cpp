#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    rep (i, n) cin >> a[i];

    sort(a.begin(), a.end());

    int min = -1;
    rep (i, k + 1) {
        int s = i; int e = n - k - 1 + i;
        int diff = a[e] - a[s];
        if (min < 0 || min > diff) min = diff;
    }

    cout << min << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
