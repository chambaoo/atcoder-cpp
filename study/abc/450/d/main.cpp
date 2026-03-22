#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    rep (i, n) cin >> a[i];

    sort(a.begin(), a.end(), greater<>());

    a[0] / k;

    // cout << a[0] << endl;
    // cout << a[1] << endl;



    // int max = *max_element(a.begin(), a.end());
    // int min = *min_element(a.begin(), a.end());

    // cout << max << endl;
    // cout << min << endl;

    // int diff = max - min;

    // // while ()
    

    return 0;
}