#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 创建vector用于存储int
    vector<int> vec;
    int i;

    cout << "vec的大小:" << vec.size() << endl;

    // 向vector中添加值
    for (i = 0; i < 6; i++) {
        vec.push_back(i);
    }

    // vec扩展后的大小
    cout << "vec扩展后的大小:" << vec.size() << endl;

    for (i = 0; i < 5; i++) {
        cout << "vec[" << i << "]" << vec[i] << endl;
    }

    // 使用迭代器访问
    vector<int>::iterator v = vec.begin();
    while (v != vec.end()) {
        cout << "v的值:" << *v << endl;
        v++;
    }

    return 0;
}
