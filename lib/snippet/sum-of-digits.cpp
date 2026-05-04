#include <iostream>
using namespace std;

int main() {
    int n = 12345;

    // 各桁の和
    int sum_digit = 0;

    while (n > 0) {
        sum_digit += n % 10;
        n /= 10;
    }

    cout << sum_digit << endl;
}
