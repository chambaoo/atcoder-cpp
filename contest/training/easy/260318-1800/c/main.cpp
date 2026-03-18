#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, k;
    cin >> n >> k;

    vector<string> v;


    rep (i, k) {
        string s;
        cin >> s;

        v.push_back(s);
    }

    sort(v.begin(), v.end());

    for (string s : v) {
        cout << s << endl;
    }

    return 0;
}