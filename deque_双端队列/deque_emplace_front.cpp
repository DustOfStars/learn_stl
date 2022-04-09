// 在双端队列的开头增加一个元素
// dq.emplace_front(val_type val)

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<string> dq1{"mango", "banana"};
    deque<string>::iterator itr;

    dq1.emplace_front("apple");
    dq1.emplace_front("strawberry");

    for (itr = dq1.begin(); itr != dq1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
