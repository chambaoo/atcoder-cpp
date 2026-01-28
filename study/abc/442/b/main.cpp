#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {

    int q = 5;

    int list[5] = {1, 2, 3, 2, 1};

    int vol = 0;
    bool playing = false;

    rep(i, q) {
        int a = list[i];
        if (a == 1) vol++;
        if (a == 2) if (vol > 0) vol--;
        if (a == 3) playing = !playing;

        if (playing && vol >= 3) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}