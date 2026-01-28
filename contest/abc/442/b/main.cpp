#include <iostream>
#include <vector>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> a(q);

    for (int i = 0; i < q; i++) {
        cin >> a.at(i);
    }

    int volume = 0;
    bool stream = false;
    
    for (int i = 0; i < q; i++) {
        if (a.at(i) == 1) {
            volume++;
        } else if (a.at(i) == 2) {
            if (volume > 0) {
                volume--;
            }
        } else if (a.at(i) == 3) {
            stream = !stream;
        }
        

        if (volume >= 3 && stream) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}