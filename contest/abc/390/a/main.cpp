#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

    // 不一致回数
    int count = 0;

    for (int i = 0; i < 5; i++) {

        int currentNum = a[i];
        int pairNum = a[a[i] - 1];

        // cout << currentNum << endl;
        // cout << pairNum << endl;
        // cout << "========" << endl;

        if (currentNum == i + 1) {
            continue;
        } else {
            count++;
        }

        if (count > 2) {
            cout << "No" << endl;
            return 0;
        }

        // ペアになるはずの数字が現在の順番と一致しない -> NG
        if (pairNum != i + 1) {
            cout << "No" << endl;
            return 0;

        }
        // その差の絶対値が1ではない -> NG
        if (abs(pairNum - currentNum) != 1) {
            cout << "No" << endl;
            return 0;
        }
    }

    if (count == 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}