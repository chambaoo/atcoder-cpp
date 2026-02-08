#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {


    int t;
    cin >> t;


    rep(i, t) {
        int n;
        cin >> n;

        vector<int> vec;

        rep(j, n) {
            int r;
            cin >> r;
            vec.push_back(r);
        }

        int count = 0;
        rep(k, n) {
            if (vec[k] > 2) {
                // 最後の列の駒を動かさないことになってしまう
                while (abs(vec[k] - vec[k+1])) {
                    vec[k] = vec[k] - 1;
                    count++;
                }

            }
        }
        cout << count << endl;

    }



    return 0;
}
