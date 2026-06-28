#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int h = 0;

    // 数の増減を使うと楽。
    for (auto& nx : s) {
        if (nx == 'E') {
            h++;
        } else {
            h--;
        }
    }
    if (h > 0) {
        cout << "East\n";
    } else {
        cout << "West\n";
    }
    return 0;
}

// --------------------------------
// Reference
// --------------------------------
