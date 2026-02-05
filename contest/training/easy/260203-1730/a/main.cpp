#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, s, k;
    cin >> n >> s >> k;

    int sum = 0;

    rep(i, n) {
        int p, q;
        cin >> p >> q;

        sum += p * q;
    }

    if (sum >= s) cout << sum << endl;
    else cout << sum + k << endl;

    return 0;
}

