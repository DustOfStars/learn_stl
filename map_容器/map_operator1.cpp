//  map<char, int> m2 = m1;
//  map<char, int> m2 = move(m1);  // m1变成空了
//
//  first=map<char,int>();       // first现在是空
//

#include <iostream>
#include <map>

using namespace std;

int main(void) {

    map<char, int> m1 = {{'a', 1}, {'b', 2}, {'c', 3}};

    cout << "Map m1包含以下元素" << endl;
    for (auto it = m1.begin(); it != m1.end(); ++it)
        cout << it->first << " = " << it->second << endl;

    map<char, int> m2 = move(m1);
    cout << "\n将元素从m1移到m2后... \n";
    cout << "\nMap m2包含以下元素" << endl;
    for (auto it = m2.begin(); it != m2.end(); ++it)
        cout << it->first << " = " << it->second << endl;

    cout << "Map m1包含以下元素" << endl;
    for (auto it = m1.begin(); it != m1.end(); ++it)
        cout << it->first << " = " << it->second << endl;
    return 0;
}
