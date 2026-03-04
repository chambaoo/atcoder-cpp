// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {

//     string a, b;
//     cin >> a >> b;

//     rep (i, (int)a.size()) {
//         if ((a[i] - '0') + (b[i] - '0') > 10) {
//             cout << "Hard" << endl;
//             return 0;
//         }
//     }
//     cout << "Easy" << endl;

//     return 0;
// }

// https://atcoder.jp/contests/adt_easy_20260304_1/editorial/2949
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;
    
    while (a > 0 && b > 0) {
        if ((a % 10) + (b % 10) >= 10) {
            cout << "Hard\n";
            return 0;
        }
        a /= 10;
        b /= 10;
    }
    cout << "Easy\n";
}
