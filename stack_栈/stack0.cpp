// stack栈 : LIFO 后进先出,首先插入的元素要在末尾才能提取.
//           有一个top元素,位于最上面,所以,插入删除操作都是在堆栈的顶部元素进行的.

// stack中的容器要支持的操作:
// empty()
// size()
// back()
// push_back()
// pop_back()

// stack的函数:
// top    访问stack的顶部元素
// push   在stack的顶部插入新元素
// pop    删除元素,从顶部
// emplace  用于在顶部元素的上方插入新元素
// swap     交换两个容器的内容
// relation operators  非成员函数指定堆栈所需的关系运算符
// uses allocator<stack>  非成员函数将分配器用于堆栈

#include <iostream>
#include <stack>
using namespace std;
void newstack(stack<int> ss) {
    stack<int> sg = ss;
    while (!sg.empty()) {
        cout << '\t' << sg.top();
        sg.pop();
    }
    cout << '\n';
}
int main() {
    stack<int> newst;
    newst.push(55);
    newst.push(44);
    newst.push(33);
    newst.push(22);
    newst.push(11);

    cout << "最新的堆栈是 : ";
    newstack(newst);
    cout << "\n newst.size() : " << newst.size();
    cout << "\n newst.top() : " << newst.top();
    cout << "\n newst.pop() : ";
    newst.pop();
    newstack(newst);
    return 0;
}
