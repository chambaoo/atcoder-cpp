#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;

    // 「鳥が 1 羽増える」「鳥が 1 羽減る」という扱いやすい形で考える
    // 色ごとの鳥の数
    vector<int> cnt(n + 1);
    // 鳥の色の変化情報
    // [[{a, b}, {a, b}], [{a, b}], []]
    vector<vector<pair<int, int>>> change(m + 1);

    // 現在の色の種類数
    int kind = 0;

    // 入力情報を処理する
    rep (i, n) {
        int a, d, b;
        cin >> a >> d >> b;

        // 現在の色をみて、初出なら、種数に計上する
        if (cnt[a] == 0) kind++;
        // 現在の色をみて、色ごとの鳥の数に計上する
        cnt[a]++;
        // d日目の色の変化の情報を追加する
        change[d].push_back({a, b});
    }

    // 1~m日目の色の変化を確認し、出力を生成する
    for (int i = 1; i <= m; i++) {
        // 
        for (const auto& nx : change[i]) {
            // 変化前の色の鳥を減らす
            cnt[nx.first]--;

            // その色の鳥の数が0羽になったら、色の種類数を減らす
            if (cnt[nx.first] == 0) kind--;

            // 変化後の色の鳥の数が0羽なら、色の種類数を増やす
            if (cnt[nx.second] == 0) kind++;

            // 変化後の色の鳥を増やす
            cnt[nx.second]++;
        }
        cout << kind << endl;
    }

}

// --------------------------------
// Reference
// --------------------------------
// #バケットソート
// https://atcoder.jp/contests/abc464/editorial/22255


// int main() {
//     int n, m;
//     cin >> n >> m;
//     int kind = 0;
//     vector<int> cnt(n + 1);
//     vector<vector<pair<int, int>>> change(m + 1);
//     for (int i = 0; i < n; i++) {
//         int a, b, d;
//         cin >> a >> d >> b;
//         if (cnt[a] == 0) {
//             kind++;
//         }
//         cnt[a]++;
//         change[d].push_back({a, b});
//     }
//     for (int i = 1; i <= m; i++) {
//         for (auto& nx : change[i]) {
//             cnt[nx.first]--;
//             if (cnt[nx.first] == 0) {
//                 kind--;
//             }
//             if (cnt[nx.second] == 0) {
//                 kind++;
//             }
//             cnt[nx.second]++;
//         }
//         cout << kind << "\n";
//     }
//     return 0;
// }