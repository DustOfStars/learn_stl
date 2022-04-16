// map : 存储key-value对,每个key必须是唯一的,
//       key 可以插入,删除,但是不能更改,key对应的value可以更改
//
//
// 迭代器:
// begin end
// cbegin cend
// rbegin rend
// crbegin crend


// 容量:
// empty()
// size()
// max_size()


// 元素访问:
// operator[]
// at 


// 修饰符:
// insert    map中插入元素
// erase     map中擦除元素
// swap      交换
// clear     清空
// emplace   构造新元素并插入map
// emplace_hint    通过提示构造新元素并插入map


// 观测器:
// key_comp
// value_comp


// 操作方式:
// find     搜索给定key的元素
// count    获取与给定key匹配的的元素数目
// lower_bound    迭代器下限
// upper_bound    迭代器上限
// equal_range    返回与给定key匹配的元素范围


// 分配器:
// get_allocator    返回用于构造map的分配器对象


// 非成员函数重载:
// operator==    检查两个map是否相等
// operator!=
// operator<
// operator<=
// operator>
// operator>=
// swap()

#include <iostream>
#include <map>
#include <string.h>
using namespace std;
int main() {
    map<int, string> Employees;
    // 1) 使用数组索引符号进行赋值
    Employees[101] = "Nikita";
    Employees[105] = "John";
    Employees[103] = "Dolly";
    Employees[104] = "Deep";
    Employees[102] = "Aman";
    cout << "Employees[104]=" << Employees[104] << endl << endl;
    cout << "Map 大小: " << Employees.size() << endl;
    cout << endl << "自然顺序:" << endl;
    for (auto ii = Employees.begin(); ii != Employees.end(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
    cout << endl << "相反顺序:" << endl;
    for (auto ii = Employees.rbegin(); ii != Employees.rend(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
}
