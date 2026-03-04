// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #define ll long long

// int main() {
//     int n;
//     cin >> n;

//     vector<int> d(n);

//     rep (i, n) cin >> d[i];

//     int x = 0;
//     while(d[x] < 1) x++;
//     int y = n - 1;
//     while(d[y] < 1) y--;

//     cout << abs(x - y) << endl;

//     return 0;
// }

// https://atcoder.jp/contests/adt_easy_20260304_1/editorial/13864
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
	int n;
	cin >> n;

	vector<int> l(n);

	rep(i, n) cin >> l[i];
	
    int x = 0, y = 0;
	
    for (int i = 0; i < n; i++) {
		if (l[i] == 1) {
			x = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (l[i] == 1) {
			y = i;
			break;
		}
	}
	cout << y - x << '\n';
}
