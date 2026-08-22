#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    map<string, int> m;
    rep (i, 4) {
        string s;
        cin >> s;

        m[s]++;
    }

    // ABC , ARC , AGC , AHC
    if (!m["ABC"]) cout << "ABC" << endl;
    if (!m["ARC"]) cout << "ARC" << endl;
    if (!m["AGC"]) cout << "AGC" << endl;
    if (!m["AHC"]) cout << "AHC" << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/adt_easy_20260730_1/tasks/abc217_b
