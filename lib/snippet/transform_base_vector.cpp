#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> transform_base_vector(ll n, int base) {
    if (n == 0) return {0};

    vector<int> digits;

    while (n > 0) {
        digits.push_back(n % base);
        n /= base;
    }

    reverse(digits.begin(), digits.end());
    
    return digits;
}
