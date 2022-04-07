// vec.pop_back()  向量中删除最后一个元素

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v0{"a", "b", "c"};
    v0.pop_back();
    for (vector<string>::iterator itr = v0.begin(); itr != v0.end(); itr++) {
        cout << *itr << endl;
    }
    return 0;
}
