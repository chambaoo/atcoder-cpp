#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int diff = a - b;

    int ans = 1;
    for (int i = 0; i < diff; i++) {
        ans *= 32;
    }

    // cout << pow(32, diff) << endl;
    cout << ans << endl;

    return 0;
}