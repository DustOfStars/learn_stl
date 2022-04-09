// dq1.swap(dq2)    交换两个双端队列的内容

#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<string> str1{"aa", "bb", "cc"};
    deque<string> str2{"c", "d", "e"};

    str1.swap(str2);

    for (int i = 0; i < str1.size(); i++) {
        cout << str1[i] << " ";
    }
    cout << endl;
    return 0;
}
