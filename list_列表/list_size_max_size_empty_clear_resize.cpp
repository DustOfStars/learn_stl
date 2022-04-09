// l1.size()    返回list的元素数目
// l1.max_size()    返回最大大小
// l1.empty()    判断list是否为空
// l1.clear()    清空元素
// l1.resize(int n, value_type val)    若扩充大小,则用val进行补充

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1{0, 1, 2, 3, 4};
    l1.emplace(l1.begin(), 100);

    cout << l1.size() << endl;
    cout << l1.empty() << endl;

    for (list<int>::iterator itr = l1.begin(); itr != l1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    cout << l1.max_size() << endl;
    l1.clear();
    cout << l1.empty() << endl;

    l1.resize(10, 1000);
    cout << l1.size() << endl;
    return 0;
}

// emplace 和 insert 的区别:
// emplace 只能传入一个元素,insert可以多个
// 首个参数都是itr表示位置
// 注意insert可以有三种用法!
