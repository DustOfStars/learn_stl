// push_back()    在双端队列的末尾添加一个元素
// push_front()    在双端队列的开头添加一个元素
// pop_back()    在双端队列的末尾删除一个元素
// pop_front()    在双端队列的开头删除一个元素
//

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq{0, 1, 2, 3, 4, 5};

    dq.push_back(101);
    dq.push_front(11);

    for (deque<int>::iterator itr = dq.begin(); itr != dq.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;

    dq.pop_front();
    dq.pop_back();
    for (deque<int>::iterator itr = dq.begin(); itr != dq.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
