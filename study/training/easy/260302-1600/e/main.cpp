// https://atcoder.jp/contests/adt_easy_20260302_1/editorial/9058
// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   long long N;
//   cin >> N;
//   N--;
//   vector<int> a;
//   while (N) {
//     a.push_back(N % 5);
//     N /= 5;
//   }
//   if (a.empty()) a.push_back(0);
//   reverse(begin(a), end(a));
//   for (auto& x : a) cout << x * 2;
//   cout << endl;
// }


#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

vector<int> transform_base_vector(ll n, int base) {
    if (n == 0) return {0};

    vector<int> digits;

    while (n > 0) {
        digits.push_back(n % base);
        n /= base;
    }

    reverse(digits.begin(), digits.end());
    
    return digits;
}


int main() {
    ll n;
    cin >> n;

    // 5進数を考える
    // 0,2,4,6,8 を 0,1,2,3,4 に置き換えて問題を解いているので、最後に元の問題に戻すために 2倍する
    for (auto& x : transform_base_vector(n, 5)) cout << x * 2;

    return 0;
}
