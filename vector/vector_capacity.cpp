// vec.capacity()  返回vec当前分配的容量，在不重新分配内存的情况下

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v0{"hello world", "yes or no", "?"};
    vector<char> ch{'a', 'b', 'c'};
    cout << v0.size() << endl;
    cout << v0.capacity() << endl;
    cout << ch.capacity() << endl;
    return 0;
}
