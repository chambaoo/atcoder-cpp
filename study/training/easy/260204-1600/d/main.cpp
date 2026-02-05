#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    set<string> se;
    for (int i = 0; i < S.size(); ++i) {
        for (int j = i+1; j <= S.size(); ++j) {
            se.insert(S.substr(i, j-i));}
    }
    cout << se.size() << endl;
}
