#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)


int main() {
    int n;
    cin >> n;

    vector<int> xList;
    vector<int> yList;
    
    rep (i, n) {
        int x, y;
        cin >> x >> y;

        xList.push_back(x);
        yList.push_back(y);
    }

    rep (i, n) {
        int xi = xList[i];
        int yi = yList[i];

        double max = 0;
        int ans = 0;

        rep (j, n) {
            if (i == j) continue;
            int xj = xList[j];
            int yj = yList[j];

            double distance = sqrt(pow(xi - xj, 2) + pow(yi - yj, 2));

            if (max < distance) {
                max = distance;
                ans = j + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
