#include <iostream>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    int ratio = 0;
    int previous;

    rep (i, n) {
        int ai;
        cin >> ai;

        if (i == 0) {
            previous = ai;
            continue;
        } else if (i == 1) {
            ratio = ai / previous;
        } else {
            if (previous * ratio != ai) {
                cout << "No" << endl;
                return 0;
            }
        }
        previous = ai;
    }
    cout << "Yes" << endl;


    return 0;
}