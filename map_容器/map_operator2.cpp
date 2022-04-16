#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<int, string> mymap = {{101, ""}, {102, ""}, {103, ""}};

    mymap[101] = "nhooo";
    mymap[102] = ".";
    mymap[103] = "com";

    //打印与键101相关联的值，即nhooo
    cout << mymap[101];
    // 打印与键102相关的值，即.
    cout << mymap[102];
    //打印与键103相关的值，即com
    cout << mymap[103] << endl;
    cout << mymap.at(103) << endl;

    return 0;
}
