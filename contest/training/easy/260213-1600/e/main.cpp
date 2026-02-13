#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {

    int n, x, y;

    cin >> n >> x >> y;

    vector<int> sweet(n);
    vector<int> salty(n);

    rep (i, n) cin >> sweet.at(i);
    rep (i, n) cin >> salty.at(i);

    sort(sweet.begin(), sweet.end());
    sort(salty.begin(), salty.end());
    

    return 0;
}