#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;

    cin >> s;

    int len = s.length();
    int count = 0;

    rep (i, len) {
        rep (j, len) {
            // i = 1, j =1 1つ目の文字から1位置
            // i = 1, j =2 1つ目の文字から2位置
            string target = s.substr(i, j);
            rep (k, len-1) {
                string check = s.substr(k, target.length());
                if (target != check) count++;
            }
        }
    }

    cout << count << endl;
    
    return 0;
}

