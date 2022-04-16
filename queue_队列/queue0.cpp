// queue : FIFO,先进先出,和stack刚好相反.
//         有一个front元素,位于第一个位置的元素,
//         有一个back元素,位于最后位置的元素
//         普通queue,插入在尾部,删除在头部
//
//
// queue的函数:
// empty()
// size()
// front()
// back()
// push()
// pop()
// emplace()    用于在当前元素上方的队列插入新元素,感觉和push区别不大啊
// swap()

#include <iostream>
#include <queue>
using namespace std;
void showsg(queue<int> sg) {
    queue<int> ss = sg;
    while (!ss.empty()) {
        cout << '\t' << ss.front();
        ss.pop();
    }
    cout << '\n';
}

int main() {
    queue<int> fquiz;
    fquiz.push(10);
    fquiz.push(20);
    fquiz.push(30);

    cout << "队列fquiz是 : ";
    showsg(fquiz);

    cout << "\nfquiz.size() : " << fquiz.size();
    cout << "\nfquiz.front() : " << fquiz.front();
    cout << "\nfquiz.back() : " << fquiz.back();

    cout << "\nfquiz.pop() : ";
    fquiz.pop();
    showsg(fquiz);

    return 0;
}
