#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<char, string> mp = {{'a', "Java"}, {'b', "C++"}, {'c', "Python"}};

    cout << endl << mp.at('a');
    cout << endl << mp.at('b');
    cout << endl << mp.at('c');

    try {
        mp.at('z');
        // 因为map中没有值为z的键，所以它会抛出一个异常

    } catch (const out_of_range &e) {
        cout << endl << "Out of Range Exception at " << e.what() << endl;
    }
    return 0;
}
