// set构造函数的的作用:
// 1. 默认构造函数:    用于构造具有0个元素的空set容器;
// 2. 范围构造函数:    用于构造内容范围为(first, last)的容器;
// 3. 复制构造函数:    用于构造带有现有容器元素副本的集合;
// 4. move构造函数:    用于使用move语义与其他元素一起构造set容器;
// 5. 初始化程序列表构造函数:    用于构造带有初始化程序列表内容的集合;

#include <iostream>
#include <set>
using namespace std;

int main() {
    // 1. 默认构造函数  size为0
    set<char> s1;
    cout << "s1.size() : " << s1.size() << endl;

    // 2. 范围构造函数
    int events[] = {2, 4, 6, 8, 10};
    set<int> s2(events, events + 5);
    cout << "s2.size() : " << s2.size() << endl;

    // 3. 复制构造函数
    s1.insert('a');
    s1.insert('b');
    set<char> s3(s1);
    cout << "s3.size() : " << s3.size() << endl;

    // 4. move构造函数
    set<char> s4(move(s1));
    cout << "s4.size() : " << s4.size() << endl;

    // 5. 初始化程序列表构造函数
    set<int> s5{1, 2, 3, 4, 5};
    cout << "s5.size() : " << s5.size() << endl;

    return 0;
}
