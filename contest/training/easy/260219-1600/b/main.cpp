#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<string> w(n);
    rep (i, n) cin >> w[i];
    vector<string> list = {"and", "not", "that", "the", "you"};

    for (string word : w) {
        for (string l : list) {
            if (word == l) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}