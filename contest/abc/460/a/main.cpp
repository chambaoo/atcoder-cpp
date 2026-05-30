#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {

    int n, m;
    cin >> n >> m;
    int cnt = 0;
    while (m != 0)
    {
        m = n % m;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
