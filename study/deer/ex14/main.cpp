#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    string s;
    cin >> s;

    vector<string> words;

    int len = s.size();

    for (int i = 0; i < len;) {
        int j = i + 1;
        while (j < len && islower(s[j])) ++j;

        string word = s.substr(i, j + 1 - i);

        word[0] = tolower(word[0]);
        word.back() = tolower(word.back());

        words.push_back(word);

        i = j + 1;
    }


    // 単語を辞書順にソートする
    sort(words.begin(), words.end());

    // 単語を連結する
    string ans = "";
    for (auto word : words) {
        word[0] = toupper(word[0]);
        word.back() = toupper(word.back());

        ans += word;
    }

    cout << ans << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// #区間分割 #連長圧縮
// - 連長圧縮とは？ランレングス圧縮
// 	- `AAABBBBBAACDD`
// 		- `(A, 3), (B, 5), (A, 2), (C, 1), (D, 2)` と表すこと
