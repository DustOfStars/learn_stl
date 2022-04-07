// vec.rbegin() r是反转，rbegin指向向量的最后一个元素
// vec.rend()    指向向量的第一个元素的前一个位置
// vec.cbegin()  c是const
// vec.cend()
// vec.crbegin()
// vec.crend()


#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> v{"Computer science", "electronics", "electrical"};
    vector<string>::reverse_iterator ritr;
    vector<string>::iterator itr;
    cout << "字符串是 :";
    for (itr = v.begin(); itr != v.end(); itr++) {
        cout << *itr << ", ";
    }
    cout << '\n';
    cout << "反转后的字符串是 :";
    for (ritr = v.rbegin(); ritr != v.rend(); ritr++) {
        cout << *ritr << ", ";
    }
    return 0;
}
