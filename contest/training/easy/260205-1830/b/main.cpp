#include <iostream>
using namespace std;

int main() {
    string s;

    cin >> s;

    string target = s.substr(s.length()-3, s.length());

    if (target == "san") cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}