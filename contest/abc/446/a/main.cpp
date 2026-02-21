#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    string a = "Of";
    char b = tolower(s[0]);
    string c = s.substr(1);

    cout << a + b + c << endl;

    return 0;
}