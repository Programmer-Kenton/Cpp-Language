/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/4/20 14:58
 * @Github https://github.com/Programmer-Kenton
 * @Author Kenton
 */

#include "vector"
#include "iostream"
#include "array"
#include "type_traits"
#include "list"
#include "map"
#include "set"

int main() {
//    std::vector<int> x{1,2,3};
//
//    auto b = x.begin();
//    auto e = x.end();
//
//    for (auto ptr = b;ptr < e;++ptr){
//        std::cout << *ptr << ' ';
//    }

//    std::array<int, 3> a;
//    std::array<int, 3> b = a;
//
//    std::cout << std::is_same_v<std::array<int,3>::value_type,int>;

//std::array<int,3> a = {1,2,3};
//std::cout << a.data() << std::endl;
//std::cout << a.front() << std::endl;
//std::cout << a.at(1) << std::endl;

//std::vector<int> a{1,1,3};
//std::vector<int> b{1,1,2};
//std::cout << (a > b) << std::endl;

//    std::vector<int> vec(3, 100);
//    auto it = vec.begin();
//    vec.insert(it, 2, 300);
//    for (int i = 0; i < vec.size(); ++i) {
//        std::cout << vec[i] << ' ';
//    }
//
//    std::cout << std::endl;
//
//    std::cout << "----------------------------------------------------" << std::endl;
//
//    it = vec.begin();
//
//    std::vector<int> vec2(2,400);
//    vec.insert(it+2,vec2.begin(),vec2.end());
//
//    for (int i = 0; i < vec.size(); ++i) {
//        std::cout << vec[i] << ' ';
//    }

//    std::list<int> a{1, 2, 3};
//    for (auto ptr = a.begin(); ptr != a.end(); ptr++) {
//        std::cout << *ptr << std::endl;
//    }
//
//    std::list<int> list1 = {1, 2, 3, 4, 5};
//    std::list<int> list2 = {10, 20, 30, 40, 50};
//
//    auto it = list1.begin();
//    std::advance(it, 2);
//
//    list1.splice(it, list2);
//
//    std::cout << "list1:" << list1 << "\n";

//std::vector<int> myv{2,3,5,4,6};
//    for (auto a : myv){
//        std::cout << a << ' ';
//    }

//    std::map<char, int> m{{'a', 3},
//                          {'b', 4}};
//    std::cout << m['a'] << std::endl;
//
//    std::map<int,int> m2{{2,4},{3,6}};
//
//    std::cout << m2[2] << std::endl;
//
//    std::set<int> s{100,3,56,7};
//    std::cout << s. <<

std::set<int> mySet;

// 插入元素
mySet.insert(10);
mySet.insert(20);
mySet.insert(30);
mySet.insert(20);

    for (const auto& element : mySet){
        std::cout << element << ' ';
    }
    std::cout << std::endl;

    // 查找元素
    if (mySet.find(20) != mySet.end()){
        std::cout << "Found 20 in the set." << std::endl;
    } else{
        std::cout << "20 not found in the set." << std::endl;
    }

    std::set<int> s {100,3,56,7};
    for (auto ptr = s.begin();ptr != s.end();++ptr){
        std::cout << *ptr << std::endl;
    }
}
