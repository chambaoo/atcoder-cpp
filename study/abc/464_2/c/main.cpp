#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> color(n + 1);
    vector<vector<pair<int, int>>> change(m + 1);

    int kind = 0;

    rep (i, n) {
        int a, d, b;
        cin >> a >> d >> b;

        if (color[a] == 0) kind++;
        color[a]++;
        change[d].push_back({a, b});
    }

    for (int i = 1; i <= m; i++) {
        for (const auto& x : change[i]) {
            color[x.first]--;
            if (color[x.first] == 0) kind--;
            if (color[x.second] == 0) kind++;
            color[x.second]++;
        }
        cout << kind << endl;
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
