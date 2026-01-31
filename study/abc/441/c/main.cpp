#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> vec;

    rep(i, n) {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end());

    rep(i, n) {
        cout << vec[i] << endl;
    }


    return 0;
}