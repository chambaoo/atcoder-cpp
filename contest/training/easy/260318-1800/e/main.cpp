#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
// setの要素を先頭から順に表示する関数
void print(set<int> s) {
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
}
int main() {
    // int n, m;
    // cin >> n >> m;

    map<int, int> m;

    m.insert({1,2});
    m.insert({1,3});
    m.insert({3,3});

    for (auto v : m) {
        cout << v.first << ' ' << v.second << endl;
    }


    set<int, int> s;

    s.insert({1,2});
    s.insert({1,3});
    s.insert({3,3});

    // print(s);

    // rep (i, m) {
    //     int k;
    //     cin >> k;
    //     cout << k << endl;
    //     vector<vector<int>> recipe(i, vector<int>(k, 0));

    //     // rep (j, k) cout << j;
    //     rep (j, k) recipe[i][j];
    //     cout << '\n';
    //     s[k]++;
    // }

    // cout << s[1] << endl;
    // cout << s[2] << endl;

    // vector<vector<int>> recipe;
    // vector<int> b(n);
    // rep (i, m) {
    //     int k;
    //     cin >> k;

    //     rep (j, k) cin >> recipe[i][j];

    // }
    // rep (i, n) cin >> b[i];

    // for (int bi : b) {
    //     for (recipe
    // }

    return 0;
}