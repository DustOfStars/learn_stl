// set是stl的的一部分,用来存储排序key的的关联容器,
// 其中每个key都是唯一的
// 可以插入 删除   但是不能修改



// 语法:
#include <functional>
#include <memory>
template<class T,                               // set::key_type/value_type
        class Compare = std::less<T>,           // set::key_compare/value_compare
        class Alloc = std::allocator<T>         // set::allocator_type
        > class set;

// T: 存储在set中的元素类型
// Compare: 一个比较2,接受两个具有相同bool类型的参数,并返回一个值. 这个参数可选
// Alloc:   分配器对象的类型,用来定义存储分配模型


// set的成员函数:
// (constructor)    构造函数
// (destructor)    set的析构函数
// operator=       将集合的元素复制到另一个集合



// 迭代器
// begin    end
// cbeigin  cend
// rbegin   rend
// crbegin  crend



// 容量:
// empty()
// size()
// max_size()



// 修饰符
// insert
// erase
// swap
// clear
// emplace
// emplace_hint



// 观测比较
// key_comp
// value_comp



// 操作查找
// find
// count
// lower_bound
// upper_bound
// equal_range



// 分配器
// get_allocator



// 非成员重载函数
// operator==
// operator!=
// operator<
// operator<=
// operator>
// operator>=
// swap()

