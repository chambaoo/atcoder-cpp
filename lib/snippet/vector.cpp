#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    int first_element = vec[0];
    int second_element = vec.at(1);
    
    // 非推奨（エラーメッセージが表示されない）
    // int first_element = vec[10];
    // 推奨（エラーメッセージが表示される）
    // int second_element = vec.at(10);

    int vec_size = vec.size();

    // 0を初期値として要素の合計値を取得する
    int sum = accumulate(vec.begin(), vec.end(), 0);

    // 末尾に要素を追加する
    vec.push_back(6);
    // 末尾の要素を削除する
    vec.pop_back();

    // 昇順にソート
    sort(vec.begin(), vec.end());
    // 降順にソート
    sort(vec.begin(), vec.end(), greater<>());

    // 最大値を取得する
    int max = *max_element(vec.begin(), vec.end());

    // p = {0, 1, 2, 3, 4} を作る
    vector<int> p(5);
    iota(p.begin(), p.end(), 0);

    // v[0] = []
    // v[1] = []
    // v[2] = []
    vector<vector<int>> v(3);
    v[0].push_back(4);
    v[0].push_back(9);
    cout << v[0][1] << endl;  // 9

    return 0;
}

int wrong_1() {
    vector<int> vec(5);
    vec.push_back(99);
    // 99 ではなく 0 が入っている
    // cout << vec.at(0) << endl;
}