// dq.begin()    返回指向deque开头元素的迭代器,若容器为空,则等于end()
// dq.end()      返回指向deque末尾元素的的下一个位置的迭代器
// dq.cbegin()   c表示const,常量迭代器,不可更改
// dq.cend()
// dq.rbegin()   r表示reverse,反转,所以返回指向deque末尾元素的迭代器
// dq.rend()     返回指向deque开头元素的前一个位置的迭代器
// dq.crbegin()  cr既反转又常量
// dq.crend()

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq{1, 2, 3};
    deque<int>::iterator itr;
    deque<int>::reverse_iterator ritr;
    deque<int>::const_iterator citr;
    deque<int>::const_reverse_iterator critr;

    itr = dq.begin();
    cout << "dq的begin() : " << *itr << endl;
    itr = dq.end() - 1;
    cout << "dq的end()-1 : " << *itr << endl;

    citr = dq.begin();
    cout << "dq的cbegin() : " << *citr << endl;
    citr = dq.end() - 1;
    cout << "dq的cend()-1 : " << *citr << endl;

    ritr = dq.rbegin();
    cout << "dq的rbegin() : " << *ritr << endl;
    ritr = dq.rend() - 1;
    cout << "dq的rend()-1 : " << *ritr << endl;
    // 注意反转的话,遍历的使用
    for (ritr = dq.rbegin(); ritr != dq.rend(); ++ritr) {
        cout << *ritr << " ";
    }
    cout << endl;

    critr = dq.crbegin();
    cout << "dq的crbegin() : " << *critr << endl;
    critr = dq.crend() - 1;
    cout << "dq的crend()-1 : " << *critr << endl;
    cout << endl;
    return 0;
}
