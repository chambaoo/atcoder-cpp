#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // 順列の全列挙
    vector<int> p(3);
    // 0, 1, 2
    iota(p.begin(), p.end(), 0);

    do {
        // p = [0, 1, 2]
        // p = [0, 2, 1]
        // p = [1, 0, 2]
        // p = [1, 2, 0]
        // p = [2, 0, 1]
        // p = [2, 1, 0]
        for (int i = 0; i < 3; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    } while (next_permutation(p.begin(), p.end()));

}
