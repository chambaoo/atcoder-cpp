#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    char x, y;
    string s;
    cin >> n >> x >> y >> s;

    string t = "";

    for (char c : s) {
        t += c == x ? x : y;
    }
    cout << t << endl;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/adt_easy_20260630_2/editorial/11545