#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool ans = (a <= b && b <= c) || c <= b && b <= a;

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}