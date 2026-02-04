#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s, t;

    cin >> s >> t;

    // is s t's prefix?
    int prefix_len = s.length();

    string t_prefix = t.substr(0, prefix_len);

    if (s == t_prefix) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

