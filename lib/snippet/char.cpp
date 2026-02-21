#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {

    char C = 'C';
    bool is_lower = islower(C); // false
    char cl = tolower(C);

    char c = 'c';
    bool is_upper = isupper(c); // false
    char cu = toupper(c);

    return 0;
}