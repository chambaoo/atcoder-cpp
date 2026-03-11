#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    auto near = [](char x, char y) {
        if (x > y) swap(x, y);
        return y - x == 1 or y - x == 4;
    };
    if (near(a, b) == near(c, d))
        cout << "Yes\n";
    else
        cout << "No\n";
}
