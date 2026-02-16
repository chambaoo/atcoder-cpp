#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    int len = s.length();

    map<char, int> table;

    string target = s;

    rep (i, len) {
        int count = 0;

        target = s.substr(i);

        count = std::count(target.begin(), target.end(), target[0]);

        table.insert(std::make_pair(target[0], count));
    }

    cout << "Yes" << endl;

    return 0;
}