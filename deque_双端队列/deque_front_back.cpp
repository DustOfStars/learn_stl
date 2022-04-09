// dq.front()    返回对第一个元素的引用
// dq.back()    返回对最后一个元素的引用

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq{0,1,2,3,4};
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    return 0;
}
