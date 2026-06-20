#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void) {
    
    queue<int> q;
    
    int i = 10;
    q.push(i);
    q.emplace(i, i);
    q.front();
    q.pop();
    q.empty();
    q.size();

    return 0;
}
