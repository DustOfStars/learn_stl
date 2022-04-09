// emplace_back()    在末尾加上一个元素,并且容量增加一

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq1{1, 2, 3, 4};
    deque<int>::iterator itr;
    dq1.emplace_back(10);
    for (itr = dq1.begin(); itr != dq1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
