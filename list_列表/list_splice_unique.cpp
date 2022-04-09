// l1.unique()    // 将list中的的重复元素都删除
// l1.splice(iterator pos, l2)    拼接函数,将元素从l2移动到l1的指定位置,拼接整个l2到l1的pos位置 
// l1.splice(iterator pos, l2, iterator pos2) 拼接l2的pos2位置的元素到l1的pos位置
// l1.splice(iterator pos, l2, iterator first, iterator last)    拼接l2的first到last这段到l1的pos位置
//
// 注意:使用splice之后,l2会被清空,所以,对一个list只能用一次!!
//

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1{0, 1, 2, 3, 3, 3};
    list<int> l2{100, 200, 300};
    list<int>::iterator itr;

    l1.unique();
    cout << l1.size() << endl;
    // l1.splice(l1.begin(), l2);
    l1.emplace_back(999);

    // l1.splice(l1.end(), l2, l2.begin());
    l1.splice(l1.end(), l2, l2.begin(), l2.end());

    cout << l2.size() << endl;

    for (itr = l1.begin(); itr != l1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
