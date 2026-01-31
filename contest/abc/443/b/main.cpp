#include <iostream>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, k;

    cin >> n >> k;

    int count = 0;
    int sum = 0;

    while (sum <= k)
    {
        sum += n;
        if (sum >= k) {
            cout << count << endl;
            break;
        }
        count++;
        n++;
    }
    
    return 0;
}