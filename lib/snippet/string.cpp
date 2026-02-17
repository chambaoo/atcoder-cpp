#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string str = "hello";

    // 文字列の長さ
    int length = str.length();

    // 文字列の最初の文字を取得
    char first_char = str.at(0);

    // 文字列に文字を追加
    str.append("s");

    for (char c : str) {
        // 1文字ずつ取り出す
        // cout << c << endl;
    }

    // 開始地点をずらしながら、全パターンチェック
    for (int i = 0; i < length; i++) {
        // i 番目 ～ 最後(length - 1)までの文字列を切り出す
        string head = str.substr(i);
        // 0 番目 ～ i 文字 の文字列を切り出す
        string tail = str.substr(0, i);
        // list.push_back(head + tail);
    }


    return 0;
}


int main() {
    int n = 26;
    string ans;

    // 辞書順で i 番目の英小文字は、例えば C++ では (char)('a' + i - 1) と求められる
    rep(i, n) {
        int p;
        // cin >> p;
        ans += (char)('a' + p - 1);
    }

}

