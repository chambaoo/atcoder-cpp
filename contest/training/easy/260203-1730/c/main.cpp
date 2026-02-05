#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string str;
    cin >> str;
    
    int count_lower = 0;
    string upper = "";
    string lower = "";

    rep(i, str.length()) {
        if (islower(str.at(i))) {
            count_lower++;
            lower += str.at(i);
            upper += toupper(str.at(i));
        } else {
            lower += tolower(str.at(i));
            upper += str.at(i);
        }
    }
    if (count_lower > str.length() / 2) cout << lower << endl;
    else cout << upper << endl;

    return 0;
}