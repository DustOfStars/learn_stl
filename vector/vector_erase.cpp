// vec.erase(pos)  删除指定位置的元素
// vec.erase(start_iterator, end_iterator)  删除start和end位置之间的元素

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v0{0, 1, 2, 3, 4};
    v0.erase(v0.end() - 1);
    for (int i = 0; i < v0.size(); i++) {
        cout << v0[i] << " ";
    }
    cout << endl;
    return 0;
}
