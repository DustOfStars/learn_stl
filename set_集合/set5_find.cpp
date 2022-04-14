// s1.find(200);    用于查找具有指定val值的元素,
// 找到的的话,返回指向该元素的itr,否则返回指向end的itr;
//

#include <iostream>
#include <set>
using namespace std;

int main() {
    char n;
    set<char> s {'a', 'b', 'c', 'd'};
    cout << "输入要搜索的元素: ";
    cin >> n;

    auto itr = s.find(n);
    if(itr != s.end()) {
        cout << "找到,值为: " << *itr << endl;
    }else {
    cout << "未找到" << endl;
    }
    return 0;
}
