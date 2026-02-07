#include<vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    int first_element = vec[1];
    int second_element = vec.at(1);
    
    // 非推奨（エラーメッセージが表示されない）
    // int first_element = vec[10];
    // 推奨（エラーメッセージが表示される）
    // int second_element = vec.at(10);

    int vec_size = vec.size();

    // 末尾に要素を追加する
    vec.push_back(6);
    // 末尾の要素を削除する
    vec.pop_back();

    return 0;
}

int wrong_1() {
    vector<int> vec(5);
    vec.push_back(99);
    // 99 ではなく 0 が入っている
    // cout << vec.at(0) << endl;
}