#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a != b && b == c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}