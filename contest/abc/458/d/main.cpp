#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {

    int x, q;
    cin >> x >> q;

    map<int, int> input;

    input[x]++;

    rep (i, q) {
        int a, b;
        cin >> a >> b;
        input[a]++;
        input[b]++;

        int cnt = 0;

        for (auto& k : input) {
            cnt += k.second;
            if (cnt >= (int)input.size() / 2 + 1) {
                cout << k.first << endl;
                break;
            }
        }
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// #中央値 #優先度付きキュー
// https://atcoder.jp/contests/abc458/tasks/abc458_d

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	int x;
// 	cin >> x;
// 	priority_queue<int> L;
// 	priority_queue<int, vector<int>, greater<int>> R;
// 	L.push(x);
// 	auto add = [&](int val) {
// 		if (val <= L.top()) {
// 			L.push(val);
// 		} else {
// 			R.push(val);
// 		}
// 		if (L.size() < R.size() + 1) {
// 			L.push(R.top());
// 			R.pop();
// 		}
// 		if (L.size() > R.size() + 1) {
// 			R.push(L.top());
// 			L.pop();
// 		}
// 	};
// 	int Q;
// 	cin >> Q;
// 	while (Q--) {
// 		int a, b;
// 		cin >> a >> b;
// 		add(a), add(b);
// 		cout << L.top() << '\n';
// 	}
// 	return 0;
// }
