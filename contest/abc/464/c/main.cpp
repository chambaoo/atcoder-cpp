#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;

    map<int, int> color;
    vector<pair<int, pair<int, int>>> change;

    sort(change.begin(), change.end());

    rep (i, n) {
        int a, d, b;
        cin >> a >> d >> b;

        if (d == 1) {
            color[b]++;
        } else {
            color[a]++;
            change.push_back({d, {a, b}});
        }
    }

    cout << color.size() << endl;
    int index = 0;
    rep (i, n) {
        if (change.at(index).first - 1 > i) cout << color.size() << endl;
        else {
            while (change.at(index).first - 1 == i) {

                color[change.at(index).second.first]--;
                if (color[change.at(index).second.first] == 0) color.erase(change.at(index).second.first);

                color[change.at(index).second.second]++;

                index++;

            }
                        
            cout << color.size() << endl;
        }    
    }

    return 0;
}

// --------------------------------
// Reference
// --------------------------------
