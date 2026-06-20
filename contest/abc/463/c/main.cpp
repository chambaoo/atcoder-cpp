#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;
    map<int, int> p;

    rep (i, n) {
        int h, l;
        cin >> h >> l;

        if (h > p[l]) {
            p.erase(l);
        }
        p.emplace(l, h);
    }

    int q;
    cin >> q;

    rep (i, q) {
        int t;
        cin >> t;

        auto k = p.lower_bound(t + 1);
        vector<int> values;
        for (const auto& v : p) {
            values.push_back(v.second);
        }
        auto ans = max_element(values.begin(), values.end());
        cout << *ans << endl;
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------

    // rep (i, n) {
    //     int h, l;
    //     cin >> h >> l;
    //     p.insert({h, l});
    // }
    // map<int, int> max;

    // for (auto x : p) {
    //     cout << x.first << " : " << x.second << endl;
    // }

    // int q;
    // cin >> q;

    // rep (i, q) {
    //     int t;
    //     cin >> t;

    //     auto it = lower_bound(m.begin(), m.end(), t);
    //     int 

    // }
    

// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int n;
//     cin >> n;
//     map<int, int> m;

//     rep (i, n) {
//         int h, l;
//         cin >> h >> l;

//         m.emplace(l, h);
//     }

//     queue<pair<int, int>> que;

//     for (auto p : m) {
//         que.emplace(p.first, p.second);
//     }

//     int q;
//     cin >> q;

//     int r = 1;

//     rep (i, q) {
//         int t;
//         cin >> t;


//         if (t < que.front().first) {
//             r++;
//             continue;
//         }

//         int max_l = 0;

//         while (!que.empty() && que.front().first == t)
//         {
//             // cout << que.front().first << " , " << que.front().second << endl;

//             max_l = max(max_l, que.front().second);
//             que.pop();
//         }

//         rep (j, r) cout << max_l << endl;
//         r = 0;
//     }

    

//     return 0;
// }