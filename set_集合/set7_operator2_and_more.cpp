// 之前的s1.operator=(s2),将元素复制到另一个set，是成员函数
//
// 这里要讲的，是非成员重载函数
// operator==    检查两个set是否相等
// operator!=
// operator<=
// operator>=
// operator<
// operator>
// swap()

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<char> s1;
    set<char> s2;
    cout << (s1 == s2) << endl;
    s1.emplace('a');
    cout << (s1 == s2) << endl;

    set<string> m2;
    typedef set<string> login;

    m2 = {"xyz@123"}; // stored password

    string password;
    login m1;

    cout << "---------Login----------" << endl << endl;
    cout << "输入密码: \n";
    cin >> password;     // Get value
    m1.insert(password); // Put them in set

    cout << "您输入的密码: \n";
    for (auto it = m1.begin(); it != m1.end(); it++) {
        cout << (*it) << endl;
    }
    cout << "系统中存储的密码 :\n";
    for (auto it = m2.begin(); it != m2.end(); it++) {
        cout << (*it) << endl;
    }

    if (m1 == m2)
        cout << "\nWelcome to your Page..." << endl;
    else
        cout << "\nIncorrect Password..." << endl;

    return 0;
}
