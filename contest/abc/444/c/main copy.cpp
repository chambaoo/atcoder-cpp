#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);

    rep (i, n) cin >> vec.at(i);

    vector<int> l;

    int sum = 0;
    rep (i, n) {
        sum += vec.at(i);
        // cout << vec.at(i) << endl;
        // cout << sum << endl;
    }

    for (int i = 1; i <= (sum / 2); i++) {
        if (sum % i == 0) l.push_back(i);
    }

    for (int ans : l) {
        if (sum == ans) continue;
        if (*max_element(vec.begin(), vec.end()) > ans) continue;
        cout << ans << ' ';
    }
    cout << endl;




    return 0;
}