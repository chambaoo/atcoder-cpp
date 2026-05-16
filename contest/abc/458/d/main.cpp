#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {

    int x, q;
    cin >> x >> q;

    map<int, int> input;

    input[x]++;

    rep (i, q) {
        int a, b;
        cin >> a >> b;
        input[a]++;
        input[b]++;

        int cnt = 0;

        for (auto& k : input) {
            cnt += k.second;
            if (cnt >= (int)input.size() / 2 + 1) {
                cout << k.first << endl;
                break;
            }
        }
    }

    return 0;
}