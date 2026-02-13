#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int h, w;
    cin >> h >> w;

    vector<char, vector<char>> table(h, w);

    rep (i, h) {
        string s;
        cin >> s;
        rep (j, w) {
            table[i, j] = s.at(j);
        }
    }

    rep (i, h) {
        rep (j, w) {
            if (table[i, j] == 's') {
                // right
                if (j < 2) {
                    if (table[i, j + 1] == 'n'
                        && table[i, j + 2] == 'u'
                        && table[i, j + 3] == 'k'
                        && table[i, j + 4] == 'e') {
                            

                        } 
                }

                if (table[])
            }
        }
    }

    return 0;
}