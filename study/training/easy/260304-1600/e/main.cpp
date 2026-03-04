// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int n;
//     cin >> n;

//     // 2乗の値を保存する
//     vector<int> v(n + 1);
//     v[1] = 1;

//     vector<int> ans;

//     for (int i = 2; i < n + 1; i++) {
//         v[i] = i * i;

//         vector<int> tmp;

//         int cnt = 0;

//         for (int y = 2; y < n + 1; y++) {
//             for (int x = 1; x < y; x++) {
//                 if (v[x] + v[y] == n) cnt++;
//                 if (cnt > 1) break;
//             }
//             if (cnt > 1) break;
//         }

//         if (cnt == 1) ans.push_back(i);
//     }
//     cout << ans.size() << endl;

//     for (int ak : ans) cout << ak << ' ';

//     return 0;
// }

// https://atcoder.jp/contests/adt_easy_20260304_1/editorial/14993
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> c(N + 1);
    for (int x = 1; x * x <= N; x++) {
        for (int y = x + 1; x * x + y * y <= N; y++) {
            c[x * x + y * y]++;
        }
    }
    vector<int> ans;
    for (int n = 1; n <= N; n++) {
        if (c[n] == 1) ans.push_back(n);
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i] << " \n]"[i + 1 == (int)ans.size()];
    }
}
