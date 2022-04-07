// vec.empty()  判断是否为空，返回bool类型，为空返回true

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v0;
    cout << v0.empty() << endl;
    v0.push_back(0);
    cout << v0.empty() << endl;
    return 0;
}
