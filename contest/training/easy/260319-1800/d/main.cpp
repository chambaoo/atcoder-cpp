#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {

    int n;
    cin >> n;

    int rest = 0;
    set<int> s;
    vector<int> all(n);

    rep (i, n) {
        int a;
        cin >> a;

        if (a == -1) {
            rest++;
        } else {
            s.insert(a);
        }

        all[i] = a;
    }

    if (n - rest != (int)s.size()) {
        cout << "No" << endl;
        return 0;
    } else {
        cout << "Yes" << endl;
    }

    rep (i, n) {
        all.
    }


    return 0;
}