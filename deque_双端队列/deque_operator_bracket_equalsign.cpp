// 运算符 两个 []   和   =
// dq1.operator[](int pos)    访问位置pos处的元素
// dq1.operator=(dq2)    将新的内容分配给容器,将dq2复制到dq1中

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq{0, 1, 2, 3, 4};
    cout << dq.operator[](0) << endl;
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq.operator[](i) << " ";
    }
    cout << endl;

    deque<int> dq2{11, 22, 33};
    dq.operator=(dq2);
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq.operator[](i) << endl;
    }
    cout << endl;
    cout << dq.size() << endl;
    return 0;
}
