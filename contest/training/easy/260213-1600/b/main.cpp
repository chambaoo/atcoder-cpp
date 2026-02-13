#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    bool is_movable = true;

    if (s1[0] == '#') {
        if (s1[1] != '#' && s2[0] != '#') is_movable = false;
    }

    if (s1[1] == '#') {
        if (s1[0] != '#' && s2[1] != '#') is_movable = false;
    }
    
    if (s2[0] == '#') {
        if (s1[0] != '#' && s2[1] != '#') is_movable = false;
    }
    
    if (s2[1] == '#') {
        if (s1[1] != '#' && s2[0] != '#') is_movable = false;
    }

    if (is_movable) cout << "Yes" << endl;
    else cout << "No" << endl;
}