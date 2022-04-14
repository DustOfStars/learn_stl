// operator= 将集合的元素复制到另一个集合

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1{1, 2, 3, 4};
    set<int> s2;

    s2.operator=(s1);
    cout << s2.size() << endl;
    return 0;
}
