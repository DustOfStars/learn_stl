// d2.assign(Iterator first, Iterator last)    从d1的迭代器对象中3一段用来赋值
// d2.assign(int n, value_type val)            赋值为n次val

#include <deque>
#include <iostream>
using namespace std;
int main() {
    deque<int> first{1, 2, 3, 4};
    deque<int> second;

    deque<int>::iterator itr;
    second.assign(first.begin(), first.end());
    for (itr = second.begin(); itr != second.end(); itr++) {
        cout << *itr << " ";
    }
    return 0;
}
