#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> p = {1, 2, 3, 4, 5};

    map<int, char> dict = {
        {1, 'a'},
        {2, 'b'},
        {3, 'c'},
        {4, 'd'},
        {5, 'e'},
        {6, 'f'},
        {7, 'g'},
        {8, 'h'},
        {9, 'i'},
        {10, 'j'},
        {11, 'k'},
        {12, 'l'},
        {13, 'm'},
        {14, 'n'},
        {15, 'o'},
        {16, 'p'},
        {17, 'q'},
        {18, 'r'},
        {19, 's'},
        {20, 't'},
        {21, 'u'},
        {22, 'v'},
        {23, 'w'},
        {24, 'x'},
        {25, 'y'},
        {26, 'z'},
    };

    // 後から map に要素を追加する
    dict.insert(std::make_pair(27, 'A'));

    for (int v : p) {
        char c = dict.at(v);
        // cout << c;
    }

    string s = "factfulness";

    // 分布を求めるために、map を定義する
    map<char, int> counts;

    // 文字列の各文字と、現れる回数を map に登録する
    // c++ map 存在しないキーにアクセスすると、0で初期化されるため、
    // +1 でカウントされていく
    for (char c : s) counts[c]++;

}


int main() {
    string s = "commencement";

    // 文字列の各文字と、現れる回数の分布を map に登録する
    map<char, int> counts;
    for (char c : s) counts[c]++;

    // 現れる回数ごとに、文字の種類の分布を map に登録する
    map<int, int> characters;
    for (auto [ch, cnt] : counts) characters[cnt]++;

    for (auto [ch, cnt] : characters) {
        if (cnt != 2) {
            // cout << "No" << endl;
            return 0;
        }
    }
    // cout << "Yes" << endl;

    return 0;
}