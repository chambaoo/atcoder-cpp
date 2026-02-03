#include <iostream>
#include <vector>
using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)

// int sum(vector<int> array) {
//     int sum = 0;
    
//     rep(i, array.size()) {
//         sum += array[i];
//     }

//     return sum;
// }

/**
 * 合計を求める(再帰)
 */
int sum_recursive(vector<int> array) {
    if (array.size() == 0) {
        return 0;
    } else {
        // 先頭を除いた残りの配列を作成する
        vector<int> rest(array.begin() + 1, array.end());
        // 先頭の要素に、残りの配列の合計を足すのオペレーションを繰り返す
        return array.at(0) + sum_recursive(rest);
    }
}

/**
 * 要素の数を数える(再帰)
 */
int count_recursive(vector<int> array) {
    if (array.size() == 0) {
        return 0;
    } else {
        // 先頭を除いた残りの配列を作成する
        vector<int> rest(array.begin() + 1, array.end());
        // 先頭の要素を計上し、残りの配列の要素数を足すオペレーションを繰り返す
        return 1 + count_recursive(rest);
    }
}

/**
 * 最大値を求める(再帰)
 */
int find_max_recursive(vector<int> array) {
    if (array.size() == 2) {
        return array.at(0) > array.at(1) ? array.at(0) : array.at(1);
    } else {
        // 先頭を除いた残りの配列を作成する
        vector<int> rest(array.begin() + 1, array.end());
        // 先頭の要素と残りの配列の最大値を比較して、大きいほうを返す
        return array.at(0) > find_max_recursive(rest) ? array.at(0) : find_max_recursive(rest);
    }
}

int main() {
    vector<int> vec = {1,2,3,4,2,3,49,32,80,31};
    int ans = find_max_recursive(vec);
    cout << ans << endl;
    return 0;
}
