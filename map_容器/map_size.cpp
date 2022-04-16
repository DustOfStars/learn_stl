#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

    typedef map<string, int> phoneMap;

    string name;
    int number;
    phoneMap phone;

    cout << "输入三组名称和数字: \n";

    for (int i = 0; i < 3; i++) {
        cin >> name;
        cin >> number;
        phone[name] = number;
    }

    cout << "\n电话map的大小是:" << phone.size();
    cout << "\n电话号码列表: \n";
    phoneMap::iterator p;
    for (p = phone.begin(); p != phone.end(); p++) {
        cout << (*p).first << " " << (*p).second << " \n ";
    }

    return 0;
}
