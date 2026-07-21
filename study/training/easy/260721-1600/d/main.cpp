#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int q;
    cin >> q;

    map<int, int> m;

    rep (i, q) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;

            m[x]++;
        } else {
            auto out = m.begin()->first;
            cout << out << endl;

            m[out]--;
            if (m[out] == 0) m.erase(out);
        }
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
// 解説では、 #優先度付きキュー を利用して解く方法が紹介されている。

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int q;
// 	cin >> q;
// 	priority_queue<int, vector<int>, greater<>> pq;
// 	while (q--) {
// 		int type;
// 		cin >> type;
// 		if (type == 1) {
// 			int x;
// 			cin >> x;
// 			pq.push(x);
// 		}
// 		else {
// 			int x = pq.top(); pq.pop();
// 			cout << x << '\n';
// 		}
// 	}
// }
