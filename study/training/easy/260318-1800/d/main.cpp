#include <iostream>
using namespace std;

// #include <cmath>
// #include <iostream>
// using namespace std;

// int main() {
//   {
//     long long x = pow(15, 15);
//     cout << x << endl;
//   }
//   {
//     long long x = 1;
//     for (int i = 0; i < 15; i++) x *= 15;
//     cout << x << endl;
//   }
// }


int main() {
  long long B;
  cin >> B;
  for (int A = 1; A <= 15; A++) {
    long long x = 1;
    for (int i = 0; i < A; i++) x *= A;
    if (x == B) {
      cout << A << endl;
      exit(0);
    }
  }
  cout << "-1" << endl;
}
