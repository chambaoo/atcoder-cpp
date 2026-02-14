#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n = 26;
    string ans;

    // 辞書順で i 番目の英小文字は、例えば C++ では (char)('a' + i - 1) と求められる
    rep(i, n) {
        int p;
        cin >> p;
        ans += (char)('a' + p - 1);
    }

    cout << ans << endl;

}
