//vec.back() 返回最后一个元素，不检查该元素是否存在

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v2{"aa", "bb", "cc"};
    cout << v2.back()<<endl;
    return 0;
}
