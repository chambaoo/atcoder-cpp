#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int a, b;
    cin >> a >> b;

    int sum = a + b;

    int max = 9;

    rep(i, max) {
        if (sum != i) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}