#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    // 文字列の各文字と、現れる回数の分布を map に登録する
    map<char, int> counts;
    for (char c : s) counts[c]++;

    // 現れる回数ごとに、文字の種類の分布を map に登録する
    map<int, int> characters;
    for (auto [ch, cnt] : counts) characters[cnt]++;

    for (auto [ch, cnt] : characters) {
        if (cnt != 2) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}