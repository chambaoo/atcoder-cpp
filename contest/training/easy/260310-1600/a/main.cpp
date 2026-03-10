#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    set<int> s;
    s.insert({a, b, c, d, e});

    cout << s.size() << endl;

    return 0;
}