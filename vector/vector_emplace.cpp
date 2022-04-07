// Iterator it =  vec.emplace(iterator, args)
// C++11中新增的，pos是新元素的位置，args用于传递构造新元素的参数，每次只能一个元素
// 返回值：将迭代器返回到新插入的元素

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v0{"aa", "bb", "cc"};
    v0.emplace(v0.begin() + 1, "xx");
    for (int i = 0; i < v0.size(); i++) {
        cout << v0[i] << " ";
    }
    cout << endl;

    vector<int> v1{0, 1, 2, 3, 4};
    vector<int>::iterator itr = v1.emplace(v1.begin(), 100);
    v1.emplace(itr, 101);
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    return 0;
}
