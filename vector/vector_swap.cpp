// v1.swap(v2)  交换两个vector
// 注意：v1 和 v2 的类型必须是一致的！！

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1{1, 2, 3};
    vector<int> v2{10, 20};
    v1.swap(v2);
    for (vector<int>::iterator itr = v1.begin(); itr != v1.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
