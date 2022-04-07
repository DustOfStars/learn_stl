// vec.insert(itreator, val)
// 在iterator位置插入val，注意插入之后新的元素的位置刚好是这个itreator的位置
// vec.insert(iterator, n, val)   在iterator位置插入val，n次
// vec.insert(iterator, InputIterator first, InputIterator last)  将另一个vec的first和last之间的元素插入vec1的iterator位置

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v0{"hello", "world"};
    string str = "-str-";
    v0.insert(v0.begin(), str);
    for (int i = 0; i < v0.size(); i++) {
        cout << v0[i] << endl;
    }
    return 0;
}
