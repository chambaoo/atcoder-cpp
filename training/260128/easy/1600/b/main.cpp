#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int block = n / 5;
    int mod = n % 5;
    if (mod > 2) block++;

    cout << block * 5 << endl;

    return 0;
}