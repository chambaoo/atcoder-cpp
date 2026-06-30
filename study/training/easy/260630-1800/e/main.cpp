#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<int> a_list;

    rep (i, n) {
        int a;
        cin >> a;

        a_list.push_back(a);

        int len = a_list.size();

        if (len >= 4) {
            if (a_list[len - 1] == a_list[len - 2]
                && a_list[len - 2] == a_list[len - 3]
                && a_list[len - 3] == a_list[len - 4]
            )

            rep (j, 4) a_list.pop_back();
        }
    }

    cout << a_list.size() << endl;

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
