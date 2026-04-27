#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<int> d;
    while (n > 0) {
        d.push_back(n % 5);
        n /= 5;
    }
    reverse(d.begin(), d.end());

    string snum;

    for (int x : d) snum += to_string(x);

    cout << stol(snum) << endl;

    ll num = stol(snum);

    num--;

    cout << num * 2 << endl;

    return 0;
}