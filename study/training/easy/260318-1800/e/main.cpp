#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;

    // m個の料理について、その使用食材の種類
    vector<vector<int>> a(m);

    // m個の料理について、使用する食材の数
    vector<int> s(m);

    // n個の食材について、それを使用する料理の種類
    vector<vector<int>> l(n);

    rep (i, m) {
      int k;
      cin >> k;

      s[i] = k;

      rep (j, k) {
        int ai; cin >> ai;
        a[i].push_back(ai);
        l[ai - 1].push_back(i + 1);
      };
    }

    for (auto x : a) {
      for (auto y : x) {
        cout << y << ' ';
      }
      cout << '\n';
    }

    for (auto z : s) {
      cout << z << ' ';
    }
    cout << '\n';
    cout << '\n';

    for (auto x : l) {
      for (auto y : x) {
        cout << y << ' ';
      }
      cout << '\n';
    }

}


// -------------------------------------
// Debug 01
// -------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int n, m;
//     cin >> n >> m;

//     // 料理と使用食材
//     vector<vector<int>> a(m);

//     rep (i, m) {
//       int k;
//       cin >> k;

//       rep (j, k) {
//         int ai; cin >> ai;
//         a[i].push_back(ai);
//       };
//     }

//     for (auto x : a) {
//       for (auto y : x) {
//         cout << y << ' ';
//       }
//       cout << '\n';
//     }
// }



// -------------------------------------
// Debug 02
// -------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int n, m;
//     cin >> n >> m;

//     // m個の料理について、その使用食材の種類
//     vector<vector<int>> a(m);

//     // m個の料理について、使用する食材の数
//     vector<int> s(m);

//     rep (i, m) {
//       int k;
//       cin >> k;

//       s[i] = k;

//       rep (j, k) {
//         int ai; cin >> ai;
//         a[i].push_back(ai);
//       };
//     }

//     for (auto x : a) {
//       for (auto y : x) {
//         cout << y << ' ';
//       }
//       cout << '\n';
//     }

//     for (auto z : s) {
//       cout << z << ' ';
//     }
// }



// -------------------------------------
// Debug 03
// -------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int n, m;
//     cin >> n >> m;

//     // m個の料理について、その使用食材の種類
//     vector<vector<int>> a(m);

//     // m個の料理について、使用する食材の数
//     vector<int> s(m);

//     // n個の食材について、それを使用する料理の種類
//     vector<vector<int>> l(n);

//     rep (i, m) {
//       int k;
//       cin >> k;

//       s[i] = k;

//       rep (j, k) {
//         int ai; cin >> ai;
//         a[i].push_back(ai);
//         l[ai - 1].push_back(i + 1);
//       };
//     }

//     for (auto x : a) {
//       for (auto y : x) {
//         cout << y << ' ';
//       }
//       cout << '\n';
//     }

//     for (auto z : s) {
//       cout << z << ' ';
//     }
//     cout << '\n';
//     cout << '\n';

//     for (auto x : l) {
//       for (auto y : x) {
//         cout << y << ' ';
//       }
//       cout << '\n';
//     }

// }




