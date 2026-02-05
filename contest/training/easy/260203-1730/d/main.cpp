#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> s;
    vector<string> t;

    rep(i, n) {
        string si;
        cin >> si;

        s.push_back(si);
    }

    rep(j, n) {
        string tj;
        cin >> tj;

        t.push_back(tj);
    }

    sort(t.begin(), t.end());
    t.erase(unique(t.begin(), t.end()), t.end());

    int count = 0;
    
    rep(i, s.size()) {
        string si = s.at(i);
        string s_back = si.substr(3, 3);

        rep(j, t.size()) {
            string tj = t.at(j);
            if (s_back == tj) count++;
        }
    }
    cout << count << endl;


    return 0;
}