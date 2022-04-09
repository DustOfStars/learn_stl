// dq.max_size()    返回双端队列的最大大小
// dq.resize(int n, value_type val)    大小修改为给定的n,如果变大了,则用val补充
// dq.shrink_to_fit()    减少容器的的大小到满足元素所占存储空间,不会修改内容

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq1{0, 1, 2, 3, 4};
    cout << dq1.max_size() << endl;
    dq1.resize(10, 999);
    for (int i = 0; i < dq1.size(); ++i) {
        cout << dq1[i] << " ";
    }
    cout << endl;
    cout << dq1.size() << endl;
    dq1.shrink_to_fit();
    cout << dq1.size() << endl;
    cout << endl;
    return 0;
}
