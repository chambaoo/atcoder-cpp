// #include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
  vector<ll> a = {3, 52, 32, 6}, b = {90, 28, 4, 3};

  sort(a.begin(), a.end(), greater<>());
  sort(b.begin(), b.end(), greater<>());
}
