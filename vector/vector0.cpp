#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> v1;
    v1.push_back("hello");
    v1.push_back("world!");

    for (vector<string>::iterator v = v1.begin(); v != v1.end(); ++v) {
        cout << *v << " ";
    }
    return 0;
}
