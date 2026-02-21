#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)


// その日の夜に捨てることはない

int main() {
    
    int t;
    cin >> t;
    
    rep (i, t) {
        int n, d;
        cin >> n >> d;

        vector<int> a(n);
        vector<int> b(n);
        
        rep (ai, n) cin >> a[ai];
        rep (bi, n) cin >> b[bi];

        // j 日目
        rep (j, n) {

            int use = b[j];

            // 古いほうから使っていく k
            rep (k, n) {
                if (use == 0) break;

                // 残っているか
                if (a[k] > 0) {
                    if (a[k] >= use) {
                        a[k] -= use;
                        use = 0;
                        break;
                    } else {
                        use -= a[k];
                        a[k] = 0;
                        continue;
                    }
                }
            }
            // 期限切れを捨てる
            rep (k, j + 1 - d) {
                a[k] = 0;
            }
        }

        int sum = accumulate(a.begin(), a.end(), 0);

        cout << sum << endl;

    }

    return 0;
}