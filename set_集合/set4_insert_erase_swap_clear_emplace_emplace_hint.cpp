// s1.insert(val)    插入一个值
// s1.insert({val1, val2})       插入初始化列表的值    C++11
// s1.insert(s1.begin(), val)    在pos处插入一个val
// s1.insert(s2.find(val), s2.end())
// 把s2从3开始到结束的东西插入到s1，两个pos确定区间，也是C++11开始有的
// 返回值：返回布尔对以表示是否发生插入，并返回指向新插入元素的迭代器。

// erase 删除单个元素或者一个区间
// s1.erase(val)    删除一个值
// s1.erase(s1.begin(), s1.end())    删除区间
// iterator  erase (const_iterator position);  //从 C++ 11开始
// size_type erase (const value_type& val);    //从 C++ 11开始
// iterator  erase (const_iterator first, const_iterator last); //从 C++ 11开始
// 返回值：
// 它返回一个指向已删除元素的下一个元素的迭代器，或者返回已删除元素的数量。

// s1.swap(s2) 或者 swap(set1, set2);    交换两个set的内容
// s1.clear()     清除set的内容,size变为0

// emplace()函数用于通过将新元素插入容器来扩展set容器。元素是直接构建的（既不复制也不移动）。
// 通过给传递给该函数的参数args调用元素的构造函数。
// 仅当键不存在时才进行插入。
// s1.emplace(val)
// 返回值：
// 函数返回一个布尔对，first指向新插入元素的迭代器，second将指示是否发生了插入

// 用于通过使用提示作为元素位置，将新元素插入容器来扩展set容器。元素是直接构建的（既不复制也不移动）。
// 通过给传递给该函数的参数args调用元素的构造函数。
// 仅当key不存在时才进行插入。
// m.emplace_hint(m.begin(), 10);
// 返回值：
// 将迭代器返回到新插入的元素。如果元素已经存在，则插入失败，并将迭代器返回到现有元素。

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s_insert{1, 2, 3, 4};
    set<int>::iterator itr0;
    s_insert.insert(10); // 默认插到最后
    s_insert.insert(s_insert.begin(), 99);
    for (set<int>::iterator itr = s_insert.begin(); itr != s_insert.end();
         ++itr) {
        cout << *itr << " ";
    }
    cout << endl;

    // 因为insert返回指向等值的元素的迭代器，所以最终的结果是有序的
    set<int> s;
    auto itr = s.insert(s.begin(), 1000);
    itr = s.insert(s.end(), 1);

    itr = s.insert(itr, 4);
    itr = s.insert(itr, 2);
    itr = s.insert(itr, 5);
    itr = s.insert(itr, 3);

    cout << "集合中的元素是: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    set<string> m = {"Java", "C++", "SQL"};
    // 插入初始化器列表中的元素
    m.insert({"VB", "Oracle"});

    cout << "集合包含以下元素:" << endl;

    for (auto it = m.begin(); it != m.end(); ++it)
        cout << *it << endl;

    // erase 有pos做参数时返回itr，只有val时返回清除的个数
    set<int> myset;
    set<int>::iterator it;
    myset = {10, 20, 30};
    cout << "删除元素之前: \n";
    for (it = myset.begin(); it != myset.end(); ++it)
        cout << *it << '\n';
    it = myset.find('b');
    myset.erase(*it);
    // erasing by iterator
    cout << "\n删除元素后: \n";
    for (it = myset.begin(); it != myset.end(); ++it)
        cout << *it << '\n';

    // erase 删除奇数
    set<int> m2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    // 从m删除所有奇数
    cout << "删除奇数后，元素是:\n ";
    for (auto it3 = m2.begin(); it != m2.end();) {
        if (*it3 % 2 == 1) {
            it3 = m2.erase(it3);
        } else {
            ++it3;
        }
    }
    for (auto &p : m2) {
        cout << p << ", ";
    }

    // iterator 声明
    set<int>::iterator it;
    int sum = 0;
    // 求元素之和
    while (!myset.empty()) {
        it = myset.begin();
        sum = sum + *it;
        myset.erase(it);
    }

    // emplace返回的迭代器指向新插入的元素，所以不是有序的
    return 0;
}
