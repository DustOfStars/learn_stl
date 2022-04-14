// itr =  s.lower_bound('c'); 返回一个itr，指向参数对应的key,找不到的话指向end；
// pair<iterator, iterator> equal_range(val);
// 返回容器中等于val的所有元素的范围的边界，
// 因为set中元素唯一，所以两个itr,第一个指向val，第二个为++1；
// 如果val没找到，则返回指向最近的大于val的值；
// 若val比set都大，则指向end

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> myset;
    set<int>::iterator itlow, itup;

    for (int i = 1; i < 10; i++)
        myset.insert(i * 10); // 10 20 30 40 50 60 70 80 90

    itlow = myset.lower_bound(30); // 下界
    itup = myset.upper_bound(60);  // 上界
    auto ret = myset.equal_range(20);
    cout << *ret.first;
    cout << *ret.second;
    myset.erase(itlow, itup); // 10 20 70 80 90   所以，erase把上下边界都包括了

    std::cout << "myset contains:";
    for (set<int>::iterator it = myset.begin(); it != myset.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    return 0;
}
