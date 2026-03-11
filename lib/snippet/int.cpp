#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // string → int
    int x = stoi("324091");

    // int → string
    string s = to_string(x);

    // int(1桁) → char
    char c = '0' + x;

    // char(数字) → int
    int x = c - '0';
}

// floor(x / m) を整数計算で求める関数
// x が負のときでも正しく動くようにしている
// x % m は負になることがあるので
// (x % m + m) % m にして
// 余り r を 0 ～ m-1 に正規化する
// x = m*k + r の形になるので
// (x - r) は必ず m の倍数になる
// よって (x - r) / m = floor(x / m)

ll floor(ll x, ll m) {
    ll r = (x % m + m) % m;
    return (x - r) / m;
}
