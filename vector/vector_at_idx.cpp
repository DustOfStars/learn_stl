// vec.at(idx) 返回索引idx指向的数据，如果越界，抛出ouot_of_range异常

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1{1, 2, 3, 4};
    for (int i = 0; i < v1.size(); i++) {
        cout << "v1.at(" << i << ") = " << v1.at(i) << endl;
    }
    return 0;
}
