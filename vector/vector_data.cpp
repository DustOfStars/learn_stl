// 在c++11中，增加了data()的用法，它返回内置vec所指的数组内存的第一个元素的指针。
// 也就是返回指向数组的指针
// int *p =vec.data()

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v{10, 20, 30, 40, 50};
    int *k = v.data();
    for (int i = 0; i < v.size(); i++)
        cout << *k++ << " ";
    return 0;
}