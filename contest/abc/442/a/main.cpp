#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    // i or j 回数
    int count = 0;

    for (char c : s) {
        if (c == 'i' || c == 'j') {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}