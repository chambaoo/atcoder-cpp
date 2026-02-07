#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<int> h_list(n);

    rep (i, n) {
        int h;
        cin >> h;
        h_list.at(i) = h;
    }

    int count = 0;

    // 1番目の値が0なら次へすすむ
    // 1番目の値以下の値を探す
    // そのひとつ前の値まですべて1番目の値を引く
    // 2番目の値以下の値を探す
    // そのひとつ前の値まですべて2番目の値を引く
    // 最後の値はどう扱おうか？

    for (int i = 0; i < n; i++) {
        int cur = h_list.at(i);

        if (cur == 0) continue;

        for (int j = i + 1; j < n; j++) {
            int tar = h_list.at(j);
            // cout << cur << " >= " << tar << "?" << endl;
            if (cur >= tar) {
                for (int k = i; k < j - 1; k++) {
                    cout << h_list.at(k) << "to";
                    h_list.at(k) -= cur;
                    cout << h_list.at(k) << "[" << i << endl;
                }
                count += cur;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}