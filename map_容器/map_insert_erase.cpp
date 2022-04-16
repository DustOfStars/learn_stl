// insert     在map中插入元素
// 1. m.insert(pair<char, int>('d', 4));
// 2. m.insert(m.begin(), pair<char, int>('d', 4));
// 3. m1.insert(m2.begin(), m2.end());
// 4. m.insert({{'d', 4}, {'e', 5}});
//
//
// erase     在map中擦除元素
// m.erase(itr)
// m.erase('d')
// m.erase(m.begin(), m.end());

// 从map中删除奇数
#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int, string> m = {{1, "one"},  {2, "two"},  {3, "three"},
                          {4, "four"}, {5, "five"}, {6, "six"}};

    // 从m删除所有奇数
    cout << "删除奇数后，元素是:\n ";
    for (auto it = m.begin(); it != m.end();)
        if (it->first % 2 == 1)
            it = m.erase(it);
        else
            ++it;
    for (auto &p : m)
        cout << p.second << ", ";
}
