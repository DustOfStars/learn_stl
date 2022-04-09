// dq.size()    返回元素数目
// dq.at(int pos)    返回pos位置的的元素
//

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<char> dq{'a', 'b', 'c', 'd'};
    for (int i = 0; i < dq.size(); ++i) {
        cout << dq.at(i) << " ";
    }
    cout << endl;
    return 0;
}
