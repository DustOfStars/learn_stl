// set<int>::key_compare comp = s1.key_comp();
// 返回比较对象的副本,由set容器用于比较key
// 无返回值,小于为true,大于为false
//
// set<int>::value_compare comp = s1.value_comp();

#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s0;
  set<int>::key_compare comp = s0.key_comp();
  cout << "比较key,1真0假: " << comp(3, 5) << endl;

  set<int> myset;
  int highest;

  set<int>::key_compare mycomp = myset.key_comp();

  for (int i = 0; i <= 5; i++)
    myset.insert(i);

  cout << "myset包含:";

  highest = *myset.rbegin();
  set<int>::iterator it = myset.begin();
  do {
    cout << ' ' << *it;
  } while (mycomp(*(++it), highest));

  std::cout << '\n';

  set<int, less<int>> s1;
  set<int, less<int>>::key_compare kc1 = s1.key_comp();
  bool result1 = kc1(2, 3);
  if (result1 == true) {
    cout << "kc1(2,3)返回true值"
         << "其中kc1是s1的函数对象." << endl;
  } else {
    cout << "kc1(2,3)返回false值 "
         << "其中kc1是s1的函数对象。" << endl;
  }

  set<int, greater<int>> s2;
  set<int, greater<int>>::key_compare kc2 = s2.key_comp();
  bool result2 = kc2(2, 3);
  if (result2 == true) {
    cout << "kc2(2,3)返回true值, "
         << "其中kc2是s2的函数对象。" << endl;
  } else {
    cout << "kc2(2,3)返回false值, "
         << "其中kc2是s2的函数对象。" << endl;
  }

  return 0;
}
