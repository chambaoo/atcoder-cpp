// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)

// int main() {
//     int x;
//     cin >> x;

//     if (x < 40) cout << 40 - x << endl;
//     else if (x < 70) cout << 70 - x << endl;
//     else if (x < 90) cout << 90 - x << endl;
//     else cout << "expert" << endl;

//     return 0;
// }

// 別解
#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;
    vector<int> A = {40, 70, 90};
    for (int i = 0; i < 3; ++i) {
        if (A[i] > X) {
            cout << A[i] - X << '\n';
            return 0;
        }
    }
    cout << "expert\n";
}
