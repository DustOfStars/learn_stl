// dq1.insert(iterator pos, value_type val)    在pos位置之前添加val
// dq1.insert(iterator pos, int n, value_type val)    在pos位置之前添加n次val
// dq1.insert(iterator pos, Iterator first, Iterator last)
// 在pos位置添加另一个dq的first到last这一段的值

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq1{0, 1, 2, 3, 4};
    deque<int> dq2;
    deque<int>::iterator itr = dq1.begin();
    ++itr;

    dq1.insert(itr, 2, 100);
    dq2.insert(dq2.begin(), dq1.begin(), dq1.end());
    for (itr = dq1.begin(); itr != dq1.end(); ++itr) {
        cout << *itr << " ";
    } // 0 100 100 1 2 3 4
    cout << endl;

    for (itr = dq2.begin(); itr != dq2.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
