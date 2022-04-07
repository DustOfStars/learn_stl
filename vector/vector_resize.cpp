// vec.resize(n, val) 修改vector的大小,修改大小为n，当n大于当前大小时，用val填充

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v0{0, 1, 2, 3, 4};
    v0.resize(10, 0);
    for (vector<int>::iterator itr = v0.begin(); itr != v0.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
