// set はユニークな要素を格納する連想コンテナの一種であり、要素自身がキーとなる、集合を表すクラスである。
#include <iostream>
#include <set>

using namespace std;

int main()
{
  // intをキーとして扱う集合
  set<int> s;

  // 挿入
  s.insert(3);
  s.insert(1);
  s.insert(4);

  // 検索 : キー(int)を指定し、対応する値を得る
  decltype(s)::iterator it = s.find(1);
  if (it != s.end())
  {
    // 発見した
    int value = *it;
    cout << value << endl;
  }
  else
  {
    cout << "not found" << endl;
  }

  // 同じ要素を追加してもエラーにはならない。
  set<string> test;
  test.insert("apple");
  test.insert("banana");
  test.insert("banana");

  // 要素数は 2
  cout << test.size() << endl;
}