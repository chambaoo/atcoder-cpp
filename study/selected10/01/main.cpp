// https://atcoder.jp/contests/abc086/tasks/abc086_a
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int a, b;
    cin >> a >> b;

    if (a * b % 2 == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
