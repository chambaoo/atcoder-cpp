#include <iostream>
#include <cmath>
using namespace std;

int f(int t) {
    return pow(t, 2) + (2 * t) + 3;
}

int main() {
    int t;
    cin >> t;

    cout << f(f(f(t)+t)+f(f(t))) << endl;

}