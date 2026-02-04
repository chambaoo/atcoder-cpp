#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    string row;

    cin >> n >> row;

    char target = ' ';

    rep(i, n) {
        char current = row.at(i);

        if (target == current) {
            cout << "No" << endl;
            return 0;
        } else {
            target = current;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

