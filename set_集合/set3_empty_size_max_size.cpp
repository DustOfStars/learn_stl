// empty()    判断是否为空,是的话返回true
// size()     返回集合中元素的数量
// max_size() 返回集合的最大大小

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<char> s1{'a', 'b', 'c', 'd'};
    cout << s1.empty() << endl;
    cout << s1.size() << endl;
    cout << s1.max_size() << endl;

    s1.clear();
    cout << s1.empty() << endl;
    cout << s1.size() << endl;
    cout << s1.max_size() << endl;

    return 0;
}
