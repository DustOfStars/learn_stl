// find : 查找指定key的元素,返回迭代器
// 找不到的话,迭代器指向end

#include <iostream>
#include <map>
using namespace std;
int main(void) {
    map<char, int> m = {
        {'a', 100}, {'b', 200}, {'c', 300}, {'d', 400}, {'e', 500},
    };

    auto it = m.find('e');

    if (it == m.end()) {
        cout << "找不到元素";
    } else {
        // 找到元素
        cout << "迭代器指向 " << it->first << " = " << it->second << endl;
    }

    return 0;
}
