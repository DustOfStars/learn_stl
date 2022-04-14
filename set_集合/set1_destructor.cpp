// 析构函数用于销毁set容器中的所有元素,并释放set容器分配的的所有存储内存.
//  ~set();

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1{1, 2, 3, 4};
    cout << s1.size() << endl;

    return 0;
}
