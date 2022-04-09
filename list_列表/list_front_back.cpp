// l1.front()    返回第一个元素
// l1.back()    返回最后一个元素
//

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1{0, 1, 2, 3, 4};
    cout << l1.front() << endl;
    cout << l1.back() << endl;
    return 0;
}
