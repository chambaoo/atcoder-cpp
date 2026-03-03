#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int q;
    cin >> q;
    
    // これまで並んだヘビの長さの総和
    ll now = 0;
    // 先頭のヘビの番号を管理するインデックス
    int top = 0;

    vector<ll> v;

    rep (i, q) {
        int t;
        cin >> t;
        if (t == 1) {
            ll l;
            cin >> l;
            // これまで列に並んだ蛇の長さ
            v.push_back(now);
            now += l;
        } else if (t == 2) {
            top++;
        } else if (t == 3) {
            int k;
            cin >> k;

            k--;
            // それまで列を抜けたヘビの数を m とすると、
            // どんな時も、列にいる前から k 番目のヘビは、ヘビ (k+m) となる
            // k 番目の蛇の頭の座標は、1,2,…,k−1 番目のヘビの長さの総和となる
            cout << v[top + k] - v[top] << "\n";
        }
    }


    return 0;
}