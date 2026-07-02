#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    map<int, int> cnt;
    string a;
    string b;

    while (n > 0) {
        cnt[n % 10]++;
        n /= 10;
    }

    while (cnt.size() > 0) {
        int p = cnt.rbegin()->first;
        a.append(to_string(p));
        cnt[p]--;
        if (cnt[p] == 0) cnt.erase(p);

        if (cnt.size() > 0) {
            int q = cnt.rbegin()->first;
            b.append(to_string(q));
            cnt[q]--;
            if (cnt[q] == 0) cnt.erase(q);
        }
    }

    if (a.size() == b.size()) {
        cout << stol(a) * stol(b) << endl;
    } else {
        ll ans1 = stol(a) * stol(b);

        b += a.at(a.size() - 1);
        a = a.substr(0, a.size() - 1);
        
        ll ans2 = stol(a) * stol(b);
        cout << max(ans1, ans2) << endl;
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// https://atcoder.jp/contests/adt_easy_20260702_1/tasks/abc221_c
