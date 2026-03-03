// 自分の解答 AC
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)

// int main() {
//     char c1, c2, c3;
//     cin >> c1 >> c2 >> c3;

//     bool ab = c1 == '<' ? true : false;
//     bool ac = c2 == '<' ? true : false;
//     bool bc = c3 == '<' ? true : false;

//     // a, b, c || c, b, a
//     if ((ab && bc && ac) || (!ab && !bc && !ac)) cout << 'B' << endl;
//     // a, c, b || b, c, a
//     if ((!bc && ac && ab) || (!ab && !ac && bc)) cout << 'C' << endl;
//     // b, a, c || c, a, b
//     if ((!ab && ac && bc) || (ab && !ac && !bc)) cout << 'A' << endl;

//     return 0;
// }

// 解説解答 シンプルな場合分けが可能
#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b, c;
    cin >> a >> b >> c;
    if(a != b)
        cout << "A" << endl;
    else if(a == c)
        cout << "B" << endl;
    else
        cout << "C" << endl;
}
