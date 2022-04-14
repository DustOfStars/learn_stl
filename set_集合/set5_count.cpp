// size_type n = s1.count('a');

#include <iostream>
#include <set>

int main() {
    using namespace std;
    set<int> s1;
    set<int>::size_type i;

    s1.insert(1);
    s1.insert(1);

    // 键在集合中必须是唯一的，所以重复的键将被忽略
    i = s1.count(1);
    cout << "s1中排序键为1的元素数为: " << i << "." << endl;

    i = s1.count(2);
    cout << "s1中排序键为2的元素数为: " << i << "." << endl;
}
