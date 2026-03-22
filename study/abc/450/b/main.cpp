#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cin >> v[i][j];            
        }
    }

    for (int a = 0; a <= n - 2; a++) {
        for (int b = a + 1; b <= n - 1; b++) {
            for (int c = b + 1; c <= n; c++) {
                if (v[a][c] > v[a][b] + v[b][c]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
