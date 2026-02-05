#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int diff = a - b;

    cout << pow(32, diff) << endl;

    return 0;
}