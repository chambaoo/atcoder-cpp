#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s;
    cin >> s;

    ll len = s.size();

    map<ll, ll> counter;

    ll start = 0;
    char b = s.at(0);
    for (ll i = 1; i < len; ++i) {

        if (s[i] != b) {
            b = s[i];
        } else {
            counter[i - start]++;
            start = i;
        }
    }
    counter[len - start]++;

    
    ll maxlen = counter.rbegin()->first;
    vector<ll> summary(maxlen);
    summary[0] = 1;
    for (ll i = 1; i < maxlen; ++i) {
        summary[i] = summary[i - 1] + i + 1;
    }

    ll ans = 0;
    for (auto [x, y] : counter) {
        ans += summary[x - 1] * y;
    }
    
    cout << ans % 998244353 << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     string s;
//     cin >> s;

//     ll len = s.size();

//     string tmp(1, s[0]);
//     ll ans = 0;

//     for (ll i = 0; i < len; ++i) {
//         ans++;

//         char t = tmp.at(tmp.size() - 1);
        
//         if (t != s[i]) {
//             ans++;
//             tmp += s[i];
//         }
//     }
    
//     cout << ans % 998244353 << endl;

//     return 0;
// }