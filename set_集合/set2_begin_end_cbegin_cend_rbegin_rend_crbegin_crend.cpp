// 不再赘述
// 但是要注意 rbegin rend时候的用法

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1{1, 2, 3, 4, 5};
    set<int>::iterator itr;
    set<int>::reverse_iterator ritr;

    for (itr = s1.begin(); itr != s1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;

    for (ritr = s1.rbegin(); ritr != s1.rend(); ++ritr) {
        cout << *ritr << " ";
    }
    cout << endl;

    return 0;
}
