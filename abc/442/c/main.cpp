#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> input();
    int length = 10;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < 2; j++) {
            // cin >> in;
            // cout << in << endl;
            int n, m;

            cin >> n >> m;

            vector<int> pair(2);
            pair.push_back(n);
            pair.push_back(m);

            input.push_back(pair);
        }
    }

    // cout << input.at(1).at(2) << endl;


    return 0;
}