// emplace : 用于通过在map中插入新元素来扩展map. 直接构建,不需复制或者移动
//           调用构造函数进行创建,只有当key不存在时才插入
// emplace_hint :
// 通过使用提示作为元素位置将新元素插入到map中,比emplace多个位置参数

#include <iostream>
#include <map>

using namespace std;

int main(void) {

    map<char, int> m;

    m.emplace('a', 1);
    m.emplace('b', 2);
    m.emplace('c', 3);
    m.emplace('d', 4);
    m.emplace('e', 5);
    m.emplace_hint(m.end(), 'x', 100);

    cout << "Map包含以下元素" << endl;

    for (auto it = m.begin(); it != m.end(); ++it)
        cout << it->first << " = " << it->second << endl;

    return 0;
}
