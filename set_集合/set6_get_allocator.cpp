// s.get_allocator().allocate(val)
// 返回用于构造集合的分配器对象的副本
// 第二部分用来重新赋值一个size

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<double> m;
    double *p;

    p = m.get_allocator().allocate(3); // 分配一个包含3个元素的数组

    // double 为 8
    cout << "分配的大小 = " << sizeof(*p) * 4 << endl;
    m.get_allocator().deallocate(p, 3); // 解除

    return 0;
}
