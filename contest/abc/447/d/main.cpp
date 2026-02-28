#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;

    cin >> s;

    int len = s.size();

    queue<int> list_i;
    queue<int> list_j;
    queue<int> list_k;

    rep (i, len) {
        if (s[i] == 'A') list_i.push(i);
        if (s[i] == 'B') list_j.push(i);
        if (s[i] == 'C') list_k.push(i);
    }

    int ans = 0;
    while (true) {
        if (list_i.empty() || list_j.empty() || list_k.empty()) break;

        int a = list_i.front();

        while (!list_j.empty() && (list_j.front() < a)) list_j.pop();

        if (list_j.empty()) break;

        int b = list_j.front();

        while (!list_k.empty() && (list_k.front() < b)) list_k.pop();

        if (list_k.empty()) break;
        
        ans++;

        list_i.pop();
        list_j.pop();
        list_k.pop();
    }

    cout << ans << endl;


    return 0;
}