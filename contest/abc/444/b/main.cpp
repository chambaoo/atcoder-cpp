#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(j, n) for (int j = 1; j <= (n); ++j)

int main() {
    int n; int k;
    cin >> n >> k;

    int count = 0;

    rep1 (i, n) {
        string target = to_string(i);
        int len = target.length();

        int sum = 0;

        rep (j, len) {
            sum += (target.at(j) - '0');
        }

        if (sum == k) count++;
        else continue;
    }

    cout << count << endl;
   
    return 0;
}