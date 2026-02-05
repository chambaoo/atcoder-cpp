#include <iostream>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    int count = 0;

    rep (i, n) {
        string d;
        cin >> d;

        int x = i + 1;

        rep (j, d.length()) {
            x = x * 10 + x;
            if (x <= stoi(d)) count++;
        }
    }

    cout << count << endl;



    return 0;
}