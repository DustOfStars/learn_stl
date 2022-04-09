// emplace()  在指定位置添加一个元素
// d1.emplace(Iterator pos, val_type val)
// 需要注意点是, begin和end都指向deque的开始和末尾在数一个的位置!!
// 因为是双端队列
// 输出: 100 1 2 3 4 100

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq1{1, 2, 3, 4};
    dq1.emplace(dq1.begin(), 100);
    dq1.emplace(dq1.end(), 100);
    for (deque<int>::iterator itr = dq1.begin(); itr != dq1.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
