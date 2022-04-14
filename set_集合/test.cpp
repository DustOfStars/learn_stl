#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s{10, 100};

    //插入元素的函数
    //在set容器中
    auto itr = s.insert(s.begin(), 1000);
    itr = s.insert(s.end(), 1);

    itr = s.insert(itr, 4);
    itr = s.insert(itr, 2);
    itr = s.insert(itr, 5);
    itr = s.insert(itr, 3);

    cout << "集合中的元素是: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    return 0;
}