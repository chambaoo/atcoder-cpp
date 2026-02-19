#include<bits/stdc++.h>
using namespace std;

int main() {

  // string → int
  int x = stoi("324091");

  // int → string
  string s = to_string(x);


  // int(1桁) → char
  char c = '0' + x;

  // char(数字) → int
  int x = c - '0';

}
