// vec.push_back()  向vec的末尾追加元素

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> v;
    v.push_back('e');
    v.push_back('n');
    v.push_back('d');

    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << endl;
    return 0;
}
