#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {

    string s;
    cin >> s;

    map<char, int> counts;

    for (char c : s) {
        counts[c]++;
    }
    
    int max = 0;
    for (auto& p : counts) {
        if (p.second > max) {
            max = p.second;
        }
    }

    string ans = "";
    for (char c : s) {
        int num = counts[c];
        if (num != max) {
            ans += c;
        }
    }

    cout << ans << endl;

    return 0;
}