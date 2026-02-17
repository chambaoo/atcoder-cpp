// まずは自分でACまで持っていった

// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)

// int main() {
//     string s;
//     cin >> s;

//     vector<string> list = {s};

//     int len = s.length();

//     // 1 ~ len を開始地点として、全パターンチェック
//     for (int i = 1; i < len; i++) {
//         string head = s.substr(i);
//         string tail = s.substr(0, i);
//         list.push_back(head + tail);
//     }

//     sort(list.begin(), list.end());

//     cout << list.at(0) << endl;
//     cout << list.at(list.size() - 1) << endl;

//     return 0;
// }

// 別解
// min_element(), max_element() を使えば、ソートをしなくて済むから、これがよさそう。
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // s.length() と同じ
    int n = s.size();

    vector<string> v(n);

    for (int i = 0; i < n; ++i) {
        v[i] = s.substr(i, n - i) + s.substr(0, i);
    }
    cout << *min_element(begin(v), end(v)) << '\n';
    cout << *max_element(begin(v), end(v)) << '\n';
}
