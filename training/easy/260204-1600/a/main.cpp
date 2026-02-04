#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string num_str;
    cin >> num_str;

    int digit = num_str.length();

    int target = 0;

    rep(i, digit) {
        int current = num_str.at(i);
        if (i == 0) {
            target = current;
        } else if (target <= current) {
            cout << "No" << endl;
            return 0;
        } else {
            target = current;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
