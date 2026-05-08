// https://atcoder.jp/contests/typical90/tasks/typical90_b
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

// カッコ列 S が整合しているかどうか
bool isvalid(const string& S) {
    int score = 0;
    for (auto c : S) {
        if (c == '(') ++score;
        else if (c == ')') --score;

        //  `(` よりも `)` が先に多く出てきたらだめ
        if (score < 0) return false;
    }

    // 最後に `(` と `)` の数が一致しなかったらだめ
    return (score == 0);
}

int main() {
    int N;
    cin >> N;

    // カッコ列を順に列挙していく
    // TODO: ビット列の操作をちゃんと理解したい。
    for (int bit = 0; bit < (1 << N); ++bit) {
        string S = "";

        // 最上位の桁から順に見ていく
        for (int i = N - 1; i >= 0; --i) {
            if (!(bit & (1 << i)))
                S += "(";
            else
                S += ")";
        }

        // 整合していたら出力
        if (isvalid(S)) cout << S << endl;
    }
}

// int main() {
//     int n;
//     cin >> n;

//     if (n % 2 == 1) return 0;

//     string base = "()";

//     if (n == 2) {
//         cout << base << endl;
//         return 0;
//     }

//     // '(' が出てくる回数
//     int block = n / 2;

//     vector<string> ans;

//     string tmp = "";

//     // くっつける操作
//     rep (i, block) {
//         tmp += base;
//     }
//     ans.push_back(tmp);

//     // 間に入れる操作

//     for (auto x : ans) {
//         cout << x << endl;
//     }

//     return 0;
// }

// // 1個目の要素を作る
// string first = "";
// rep (i, block) first += '(';
// rep (i, block) first += ')';
// ans.push_back(first);
