// list 和 vector 的差别:
// list是连续容器,而vector不连续
// vector中间插入和删除非常昂贵,因为会移动所有的的元素,而链表克服了这个问题,用list容器实现
// list支持双向,并且为插入和删除提供了有效方法
// list中遍历的速度很慢,因为list是按顺序访问的,而vector支持随机访问;
//

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l{0, 1, 2, 3};
    list<int>::iterator itr;
    for (itr = l.begin(); itr != l.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
