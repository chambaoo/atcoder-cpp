#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    int p = 5 * n;
    
    vector<int> x(p);

    rep (i, p) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    double score = 0;
    rep (i, p) {
        if (i < n || i >= p - n) continue;
        score += x[i];
    }

    cout << score / (3 * n) << endl;
    

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/adt_easy_20260721_1/tasks/abc291_b
