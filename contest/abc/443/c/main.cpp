#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> vec;

    rep (i, n) {
        int aoki;
        cin >> aoki;
        vec.push_back(aoki);
    }

    int open_time = 0;
    int wait_till = 0;

    rep (i, n) {
        int current = vec[i];

        if (wait_till < current) {
            open_time += (current - wait_till);
            if (current + 100 > t) wait_till = t;
            else wait_till = current + 100;
        }
    }

    if (n == 0) open_time = t;
    else if (wait_till < t) open_time += t - wait_till;

    cout << open_time << endl;

    return 0;
}