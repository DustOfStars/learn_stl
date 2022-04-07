// vec.emplace_back()
// 用于在向量（vector）的末尾插入新元素，并增加向量（vector）容器的大小。

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<char> v{'C', '+'};
    v.emplace_back('+');
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    return 0;
}

// emplace()与insert() 差别：
// insert()函数用于将对象复制到向量（vector）中，
// 而emplace()函数仅用于在向量（vector）内部构造对象，从而避免了不必要的操作。
// 简单的理解，
// 就是emplace()在插入元素时，是在容器的指定位置直接构造元素，而不是先单独生成，再将其复制（或移动）到容器中。
// 因此，在实际使用中，推荐大家优先使用 emplace()。