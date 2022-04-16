// 优先队列 priority_queue
// 其实是queue的派生容器,仅仅考虑最高优先级元素,
// queue遵循FIFO策略,但是优先队列,根据优先级弹出元素
// 不同点:
// 优先队列中,队列中每个元素与某个优先级关联,但是优先级不存在于数据结构;
// 具有最高优先级的元素首先被删除
// 如果存在多个相同优先级的元素,考虑该元素在队列中的顺序
//
// 把优先级理解为大小?

// 优先队列的成员函数:
// push    插入到队列尾部
// pop     从最高优先级弹出一个
// top     找到最高优先级的元素
// size
// empty
// swap
// emplace   在top位置插入一个新元素

#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> p; //优先队列声明
    priority_queue<int> q; //优先队列声明
    p.push(1);             // 插入 '1' 到 p.
    p.push(2);             // 插入 '2' 到 p.
    p.push(3);             // 插入 '3' 到 p.
    p.push(4);             // 插入 '4' 到 p.
    q.push(5);             // 插入 '5' 到 q.
    q.push(6);             // 插入 '6' 到 q.
    q.push(7);             // 插入 '7' 到 q.
    q.push(8);             // 插入 '8' 到 q.
    p.swap(q);
    std::cout << "p队列元素是 : " << std::endl;
    while (!p.empty()) {
        std::cout << p.top() << std::endl;
        p.pop();
    }
    std::cout << "q优先队列元素是 :" << std::endl;
    while (!q.empty()) {
        std::cout << q.top() << std::endl;
        q.pop();
    }
    return 0;
}
