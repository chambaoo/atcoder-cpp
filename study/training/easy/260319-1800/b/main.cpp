// my ac ans
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int n;
//     char c1, c2;
//     string s;
//     cin >> n >> c1 >> c2 >> s;

//     string ans = "";

//     for (char c : s) {
//         if (c != c1) ans += c2;
//         else ans += c;
//     }

//     cout << ans << endl;

//     return 0;
// }

// https://atcoder.jp/contests/adt_easy_20260319_2/editorial/11545
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char x, y;
    string s;
    cin >> n >> x >> y >> s;
    string t = "";
    for (char c : s)
    {
        t += c == x ? x : y;
    }
    cout << t << endl;
}

