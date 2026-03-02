#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> cnt(26, 0);

    for (char c : s) cnt[c-'a']++;
    
    int ma = *max_element(cnt.begin(), cnt.end());
    
    string t = "";
    for (char c : s){
        if (cnt[c-'a'] != ma) t += c;
    }
    cout << t << endl;
}
