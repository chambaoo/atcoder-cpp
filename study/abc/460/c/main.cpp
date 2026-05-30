// https://atcoder.jp/contests/abc460/tasks/abc460_c
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
#define INF 1LL << 60

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> a(n), b(m);

	rep (i, n) cin >> a[i];
	rep (i, m) cin >> b[i];

    // ネタはより軽いものに交換しても損しないため、軽いものから順に使っていく
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int x = 0, ans = 0;

	rep (i, m) {
        // ネタの重さはシャリの重さの 2 倍以下になるまで進む
		while (x < n && a[x] * 2 < b[i]) x++;
		if (x < n) {
			x++;
			ans++;
		}
	}
	cout << ans << '\n';
}

// int main() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> a(n);
//     vector<int> b(m);
//     rep (i, n) {
//         int ai;
//         cin >> ai;
//         a[i] = ai * 2;
//     }
//     rep (i, m) cin >> b[i];

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     int ans = 0;
//     int checked = -1;

//     rep (i, m) {
//         auto it = lower_bound(a.begin(), a.end(), b[i]);
//         if (it == a.end()) {
//             // もうない
//             break;
//         } else {
//             int j = it - a.begin();
//             if (j > checked) {
//                 checked = j;
//                 ans++;
//             } else {
//                 if (b[j] == b[j + 1]) {
//                     ans++;
//                     checked = j + 1;
//                 } else {
//                     checked = j;
//                 }
//             }
//         }
//     }
//     cout << ans << endl;

//     return 0;
// }


    // rep (i, n) {
    //     auto it = lower_bound(b.begin(), b.end(), a[i]);
    //     if (it == b.end()) {
    //         // もうない
    //         break;
    //     } else {
    //         int j = it - b.begin();
    //         cout << 'j' << j << endl;
    //     }

    //     // if (j > checked) {
    //     //     ans++;
    //     //     checked = j;
    //     // }
    //     // cout << ai << ' ' << b[j] << endl;
    // }


// --------------------------------
// Reference
// --------------------------------
// #貪欲法 #尺取り法
