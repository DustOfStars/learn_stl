// l1.insert(iterator pos, value_type val)
// 将新元素插入到迭代器的指定位置之前,所以插入是end不是end-100
// l1.insert(iterator pos, int n, value_type val)    插入n次val
// l1.insert(iterator pos, InputIterator first, InputIterator last)
// 将l2的first和last这段插入pos
//

#include <iostream>
#include <list>

using namespace std;
int main() {
    list<int> l1{0, 1, 2, 3, 4};
    list<int> l2{100, 200, 300};
    list<int>::iterator itr;

    l1.insert(l1.begin(), 3, 99);
    l1.insert(l1.end(), 999);
    l1.insert(l1.begin(), l2.begin(), l2.end());

    for (itr = l1.begin(); itr != l1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
