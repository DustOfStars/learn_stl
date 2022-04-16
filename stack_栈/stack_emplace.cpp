// emplace :  对于一个stack,在顶部添加一个元素
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> newstack;
    newstack.emplace("我们在这里可以看到emplace函数在堆栈中的应用");
    newstack.emplace("函数添加的新元素位于堆栈的顶部");
    while (!newstack.empty()) {
        cout << newstack.top() << "\n";
        newstack.pop();
    }
    return 0;
}
