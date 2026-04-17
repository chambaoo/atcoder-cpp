// ヒントありの自分の解答
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int d, n;
    cin >> d >> n;

    vector<int> l(n);
    vector<int> r(n);

    rep (i, n) cin >> l[i] >> r[i];

    // 前日比を計算する
    vector<int> diff(d);
    rep (i, n) {
        // 参加する -> その日から +1
        diff[l[i] - 1]++;
        // 退場する -> 次の日から -1
        diff[r[i]]--;
    }

    // 累積和を計算する
    vector<int> sum(d);
    sum[0] = diff[0];
    for (int i = 1; i < d; ++i) {
        sum[i] = sum[i - 1] + diff[i];
    }

    for (int x : sum) cout << x << endl;

    return 0;
}



// ヒントなしの自分の解答
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int d, n;
//     cin >> d >> n;

//     vector<int> l(n);
//     vector<int> r(n);

//     rep (i, n) cin >> l[i] >> r[i];

//     vector<int> sum(d);
//     rep (i, n) {
//         for (int j = l[i]; j <= r[i]; ++j) sum[j - 1]++;
//     }

//     for (int x : sum) {
//         cout << x << endl;
//     }

//     return 0;
// }