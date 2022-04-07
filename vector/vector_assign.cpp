// vec.assign(first, last)   将另一个vector的first到last区间的元素赋值给vec
// vec.assign(n, val)       将vec赋值为n次val

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v0{"aa", "bb", "cc"};
    v0.assign(5, "ccc");
    for (vector<string>::iterator itr = v0.begin(); itr != v0.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    vector<string> v1{"v1", "v11", "v111", "v1111"};
    v0.assign(v1.begin(), v1.end());
    for (vector<string>::iterator itr = v0.begin(); itr != v0.end(); itr++) {
        cout << *itr << " ";
    }

    cout << endl;
    return 0;
}
