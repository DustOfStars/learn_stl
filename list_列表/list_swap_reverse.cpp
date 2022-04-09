// l1.swap(l2)    交换l1 和l2
// l1.reverse()   l1中的元素翻转
//

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1{1, 2, 3, 4, 5};
    l1.reverse();
    list<int> l2{100, 200, 300};
    l1.swap(l2);

    for (list<int>::iterator itr = l2.begin(); itr != l2.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
