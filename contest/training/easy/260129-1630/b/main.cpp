#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    string s;
    cin >> n >> s;
    int t_wins = count(s.begin(), s.end(), 'T');
    int a_wins = count(s.begin(), s.end(), 'A');

    if (t_wins > a_wins) cout << 'T' << endl;
    if (a_wins > t_wins) cout << 'A' << endl;

    if (t_wins == a_wins) {
        int t_last = s.rfind('T');
        int a_last = s.rfind('A');
        if (a_last > t_last) {
            cout << 'T' << endl;
        } else {
            cout << 'A' << endl;
        }

    }

    return 0;
}