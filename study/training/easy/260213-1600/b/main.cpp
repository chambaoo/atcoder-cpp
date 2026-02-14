#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == "#." && s2 == ".#") cout << "No\n";
    else if (s1 == ".#" && s2 == "#.") cout << "No\n";
    else cout << "Yes\n";

    return 0;

}
