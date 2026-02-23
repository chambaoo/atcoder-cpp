#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
    unordered_map<int, int> um;

    um.insert({1, 3});
    um.insert({5, 2});
    um.insert({4, 4});
    
    for(auto p : um){
        cout << p.first << " " << p.second << endl;
    }
    // output:
    // 4 4
    // 5 2
    // 1 3
}
