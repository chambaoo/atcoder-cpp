// WA
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)

// int f(int a) {
//     if (a == 0) return 1;

//     int sum = 0;
//     while (a != 0) {
//         cout << "sum + " << a % 10 << endl;
//         sum = sum + a % 10;
//         a /= 10;
//     }

//     rep (i, a) sum += f(a);

//     return sum;
// }

// int main() {
//     int n;
//     cin >> n;

//     int ans = 0;
//     ans = f(n);
//     cout << ans << endl;
//     return 0;
// }

// 解説の解答
// https://atcoder.jp/contests/adt_easy_20260303_1/tasks/abc427_b
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;

// 	auto f = [&](int x) -> int {
// 		int res = 0;
// 		while (x) {
// 			res += x % 10;
// 			x /= 10;
// 		}
// 		return res;
// 	};

// 	vector<int> a(n + 1);
// 	a[0] = 1;
// 	for (int i = 1; i <= n; i++) {
// 		for (int j = 0; j < i; j++) a[i] += f(a[j]);
// 	}
// 	cout << a[n] << '\n';
// }

// ------------------------------------------------

// 問題URL
// https://atcoder.jp/contests/adt_easy_20260303_1/tasks/abc427_b
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

// f(x) = x の各桁の和
int f(int a) {
    // A0 の条件が混ざっているのでおかしい。各桁の和を返すだけの関数。
    // if (a == 0) return 1;

    int sum = 0;
    while (a != 0) {
        // cout << "sum + " << a % 10 << endl;
        sum += a % 10;
        a /= 10;
    }

    // rep (i, a) sum += f(a);

    return sum;
}

int main() {
    // 1 <= n <= 100
    // 小さい値なので、2重ループでも計算量は問題ない
    int n;
    cin >> n;

    vector<int> a(n + 1);

    // int sum = 0;
    
    a[0] = 1;

    // a[i] = Σ f(a[j]) (0 ≤ j < i)
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            // 問題文に書いてある通り、Ajの桁和を足していく
            a[i] += f(a[j]);
        }
    }

    cout << a[n] << endl;

    return 0;
}
