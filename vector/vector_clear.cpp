// vec.clear()  删除vector中的所有元素

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    cout << v.size() << endl;
    v.push_back(1);
    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;
    return 0;
}
