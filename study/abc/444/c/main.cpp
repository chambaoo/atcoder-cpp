#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

void judge(vector<int> a, int l) {

    while (a.size() && a.back() == l) a.pop_back();

    int n = a.size();

    if (n % 2 == 1) return;

    rep (i, n / 2) {
        if ( a.at(i) + a.at(n - 1 - i) != l) return;
    }

    cout << l << endl;

    return;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    rep(i, n) cin >> a.at(i);

    sort(a.begin(), a.end());

    // 割れなかったものが1本以上ある
    judge(a, a.back());

    // すべて割れた
    judge(a, a.at(0) + a.back());

    return 0;
}