#include <string>
using namespace std;

int main() {
    string str = "hello";

    // 文字列の長さ
    int length = str.length();

    // 文字列の最初の文字を取得
    char first_char = str.at(0);

    // 文字列に文字を追加
    str.append("s");


    return 0;
}
