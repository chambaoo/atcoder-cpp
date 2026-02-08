#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    int n = s.length();
    char first_char = s.at(0);

    rep (i, n) {
        char c = s.at(i);
        if (first_char == c) continue;
        else {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
   
    return 0;
}