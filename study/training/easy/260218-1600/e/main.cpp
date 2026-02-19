// TLE answer
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)

// int f(int num, vector<int> a) {
//     int len = a.size();

//     vector<int> tmp;

//     rep (j, len) {
//         if (a[j] == num) tmp.push_back(j);
//     }
//     // 3個の要素の真ん中の値を返す
//     return tmp[1];
// }

// int main() {
//     int n;
//     cin >> n;

//     int len = 3 * n;

//     vector<int> a(len);
    
//     rep (i, len) cin >> a[i];

//     vector<int> ans;

//     rep (i, n) {
//         ans.push_back(f(i + 1, a));
//     }

//     sort(ans.begin(), ans.end());

//     for (int i : ans) {
//         cout << a[i] << ' ';
//     }

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    // A1, A2, ... の順に数列を走査する。
    // このとき、今まで見た部分の中に各数字が何回現れたかを別の配列で管理しておく。
    // 今見ている数字を c としたとき、c が現れたのが 2 回目であるならば、ans の末尾に c を追加する。
    vector<int> ans;
    vector<int> cnt(n + 1);

    for (int i = 0; i < 3 * n; i++) {
        int a;
        cin >> a;

        ++cnt[a];

        if (cnt[a] == 2) ans.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? '\n' : ' ');
    }
}
