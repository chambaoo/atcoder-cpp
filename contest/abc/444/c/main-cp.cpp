#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);

    rep (i, n) cin >> vec.at(i);

    vector<int> l;

    // どれか一つと足す
    
    rep (i, n) {
        int vi = vec.at(i);

        rep (j, n) {
            if (i == j) continue;
            int vj = vec.at(j);
            l.push_back(vi + vj);
        }
    }

    return 0;
}