// l1.sort()    按照升序排序
// l1.merge(l2)    以升序合并两个排序的list,之后l2中的所有元素被删除了
// l1.merge(l2, compare)    规则不再是排序,是compare的比较器
//

#include <cstdlib>
#include <iostream>
#include <list>
using namespace std;

bool comparison(int first, int second) {
    bool a;
    a = first > second;
    return a;
}

int main() {
    list<int> l1{1, 2, 9, 8};
    list<int> l2{6, 4, 7, 10};
    list<int>::iterator itr;

    l1.sort();
    l1.reverse();
    l2.sort();
    l2.reverse();
    l1.merge(l2, comparison); // 实现了降序排序
    for (itr = l1.begin(); itr != l1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    cout << l2.size() << endl;
    return 0;
}
