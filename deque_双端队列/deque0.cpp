// deque表示双端队列，概括了队列数据结构，可以从前端或者后端的两端进行插入和删除

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> d;
    cout << "双端队列的大小是： " << d.size() << endl;
    d.push_back(100);
    cout << "双端队列的大小是： " << d.size() << endl;
    return 0;
}
