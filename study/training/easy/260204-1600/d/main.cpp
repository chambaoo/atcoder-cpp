#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int N = s.size();
    set<string> st;
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            st.insert(s.substr(i, j));
        }
    }
    cout << st.size() << endl;


    return 0;
}
