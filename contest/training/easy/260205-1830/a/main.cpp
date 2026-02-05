#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, h, x;

    cin >> n >> h >> x;

    vector<int> hp(n);

    int tmp = 0;
    int ans = 0;

    rep (i, n) {
        int p;
        cin >> p;

        int total = h + p;

        if (total < x) continue;

        if (tmp == 0 || tmp > total) {
            tmp = total;
            ans = i + 1;
        }
    }

    cout << ans << endl;

    return 0;
}