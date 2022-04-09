// dq1.clear()    删除双端队列的的所有内容
// dq1.erase()    删除元素  可以是erase(pos)   也可以是erase(first, last)
// dq1.empty()    检查是否为空

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq1 = {0, 1, 2, 3, 4};

    cout << dq1.empty() << endl;
    dq1.erase(++dq1.begin());

    for (deque<int>::iterator itr = dq1.begin(); itr != dq1.end(); ++itr) {
        cout << *itr << " ";
    } // 0 2 3 4
    cout << endl;

    dq1.clear();
    cout << dq1.empty() << endl;
    return 0;
}
