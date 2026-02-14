#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    
    int n;
    cin >> n;

    vector<int> a(n);

    rep (i, n) cin >> a.at(i);


    bool is_finishable = false;
    // 自分自身のマスに移動することがないケース
    rep (s, n) {
        if (s + 1 == a.at(s)) {
            is_finishable = true;
            break;
        }
    }
    
    int max = 0;
    
    if (!is_finishable) {
        // 繰り返されるときは、
        int len = to_string(n).length();
        int base = 10 * len;
        max = base % n;
    }

    bool is_first = true;

    rep (s, n) {
        // 駒の位置は最初動く
        int m = s;
        int count = 0;
        while (true) {

            // いま駒があるマスに書かれている整数
            int x = a.at(m);

            // 駒のマスに書いてある番号と、駒の位置が同じになるまで繰り返す
            if (m == x - 1 || (!is_finishable && count > max)) {
                
                if (is_first) {
                    cout << x;
                    is_first = false;
                } else {
                    cout << " " << x;
                }

                break;
            } else {
                m = x - 1;
            }

            count++;
        }

    }
    cout << '\n';

    return 0;
}