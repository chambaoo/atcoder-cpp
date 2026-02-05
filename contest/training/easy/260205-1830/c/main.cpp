#include <iostream>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {

    std::map<char, int> m = {
        {'A', 0},
        {'B', 3},
        {'C', 4},
        {'D', 8},
        {'E', 9},
        {'F', 14},
        {'G', 23},
    };

    char p, q;

    cin >> p >> q;

    int d = m.at(p) - m.at(q);

    if (d < 0) d = -d;

    cout << d << endl;
    

    return 0;
}