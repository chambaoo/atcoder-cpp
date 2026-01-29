#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k, g, m;
    cin >> k >> g >> m;

    int vg = 0;
    int vm = 0;

    for (int i = 0; i < k; i++) {
        if (vg == g) g = 0;
        else if (vm == 0) vm = m;
        else {
            // マグカップからグラスに移す量
            int full_vg = g - vg;
            cout << "full_vg" << full_vg << endl;
            cout << "vm" << vm << endl;
            // マグカップに水が足りているか
            if (full_vg > vm) {
                cout << i << "/" << vm << "/" << full_vg << endl;
                vg = vg + vm;
                vm = 0;
            } else {
                vg = g;
                vm = vm - full_vg;
            }
        }
        cout << vg << " " << vm << endl;

    }
    // cout << vg << " " << vm << endl;

    return 0;
}