// l1.assign(int n, value_type val)    赋值为n个val
// l1.assign(InputIterator first, InputIterator last)
// 赋值为l2的first到last这一段,就算赋值为短的,也会整个变成短的
//

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1{0, 1, 2, 3, 4};
    list<int> l2{100, 200, 300};

    // l1.assign(555, 3);
    l1.assign(l2.begin(), l2.end());
    for (list<int>::iterator itr = l1.begin(); itr != l1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
