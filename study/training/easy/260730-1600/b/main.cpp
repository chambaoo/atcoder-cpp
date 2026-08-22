#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    cout << "AGC0";
    
    if (n < 10) cout << 0;

    if (n >= 42) {
        n++;
    }

    cout << n << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/adt_easy_20260730_1
