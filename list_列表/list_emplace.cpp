// 在指定位置插入新元素,列表大小加一
//
// l1.emplace(iterator pos, value_type val)
//

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<char> l1{'a', 'b', 'c', 'd'};
    l1.emplace(l1.begin(), 'x');
    l1.emplace(l1.end(), 'y');
    for (list<char>::iterator itr = l1.begin(); itr != l1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
