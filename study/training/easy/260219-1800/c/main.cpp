#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<int> w(n);
    vector<int> x(n);

    rep (i, n) {
        cin >> w[i];
        cin >> x[i];
    }

    int max = 0;


    for (int t = 9; t < 18; t++) {

        int sum = 0;

        rep (i, n) {

            int local_time = t + x[i];
            if (local_time >= 24) local_time -= 24;

            if (9 <= local_time && local_time < 18) {
                sum += w[i];
            }

        }

        if (max < sum) max = sum;
    }

    cout << max << endl;

    return 0;
}