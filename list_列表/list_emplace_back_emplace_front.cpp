// l1.emplace_back(value_type val)    在末尾插入val
// l1.emplace_front(value_type val)    在开头插入val
//

#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> l1{"aaa", "bbb", "ccc"};
    l1.emplace_front("000");
    l1.emplace_back("111");

    for (list<string>::iterator itr = l1.begin(); itr != l1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
