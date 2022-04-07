// vec.operator[](pos)    用于访问指定位置的元素，返回指定位置的元素

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v0{"a", "b", "c"};
    for (int i = 0; i < v0.size(); i++) {
        cout << v0.operator[](i) << " ";
    }
    cout << endl;
    return 0;
}
