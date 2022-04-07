// vec.operator=(v1)
// 将新值分配给旧值，并替换旧值，这里，将v1的值分配给vec，返回*this

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<char> v{'C', '#'};
    vector<char> v1;
    v1.operator=(v);
    for (int i = 0; i < v1.size(); i++)
        std::cout << v1[i];
    cout << endl;
    return 0;
}
