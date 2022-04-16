#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<int, int> m1 = {{1, 10}, {2, 20}, {3, 30}};

    auto ite = m1.crbegin();

    cout << "反向map容器m1的第一个元素是:";
    cout << "{" << ite->first << ", " << ite->second << "}\n";

    return 0;
}
