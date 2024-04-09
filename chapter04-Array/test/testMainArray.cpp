/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/3/22 15:27
 * @Author Kenton
 */

#include <iomanip>
#include <iostream>
#include <type_traits>
#include <typeinfo>

using A2 = int[4][5];

int main() {
    // auto b = {1,2,3};
    //
    // std::cout << typeid(b).name() << std::endl;

    // std::cout << std::is_same_v<decltype(b),int[3]> << std::endl;

    // std::cout << std::is_same_v<decltype(b),int[3]> << std::endl;

    // char str[] = "Hello";

    // char *str2 = "Hello";

    // std::cout << std::is_same_v<decltype(str2),char[6]> << std::endl;

    // int x1;
    // int x2;
    // int x3;
    // int *a[3] = {&x1,&x2,&x3};
    // std::cout << std::is_same_v<decltype(a),int*[3]> << std::endl;

    // int b[3];
    //
    // int (&a)[3] = b;
    // std::cout << std::is_same_v<decltype(a),int(&)[3]> << std::endl;

    // int a[3] = {1,2,3};
    // auto b = a;
    // const int x = 3;
    // std::cout << std::is_same_v<decltype((x)),const int&> << std::endl;

    // int a[3] = {1,2,3};
    // // std::cout << a[4] << std::endl;
    //
    // std::cout << a <<  ' ' << &(a[0]) << ' ' << std::cbegin(a) << std::endl;
    // std::cout << a + 3 << ' ' << &(a[3]) << ' ' << std::cend(a) << std::endl;


    // std::begin(a); // int*
    // std::cbegin(a); // const int*

    // auto& b = a;
    // std::cout << std::begin(b) << std::endl;
    // std::cout << std::end(b) << std::endl;

    // int a[12];
    // // std::cout << std::end(a) - std::begin(a) << std::endl;
    // std::cout << std::cend(a) << std::endl;
    // std::cout << std::cbegin(a) << std::endl;
    // std::cout << std::cend(a) - std::cbegin(a) << std::endl;
    //
    // std::cout << std::size(a) << std::endl;


    // int a[4] = {2, 3, 5, 7};
    //
    // size_t index = 0;
    // while (index < std::size(a)) {
    //     std::cout << a[index] << ' ';
    //     index++;
    // }
    //
    // std::cout << std::endl;
    //
    // auto ptr = std::cbegin(a);
    // while (ptr != std::cend(a)) {
    //     std::cout << *ptr << ' ';
    //     ptr++;
    // }
    //
    // for (int x : a) {
    //     std::cout << x << std::endl;
    // }

    //
    // char str[] = "Hello";
    // auto ptr = str;

   //  int x2[3][4][5] = {1,2,3,4,5};
    // for (auto& p : x2) {
    //     for (auto& q : p) {
    //        for (auto r : q) {
    //            std::cout << r << '\n';
    //        }
    //     }
    // }
    //
    // size_t index0 = 0;
    // while (index0 < 3) {
    //     size_t index1 = 0;
    //     while (index1 < 4) {
    //         std::cout << x2[index0][index1] << std::endl;
    //         index1++;
    //     }
    //     index0++;
    // }
    //
    // A2 *ptr = x2;
    // auto ptr1 = ptr[0];

    // auto ptr = std::cbegin(x2);
    // while (ptr != std::cend(x2)) {
    //     auto ptr2 = std::cbegin(*ptr);
    //     while (ptr2 != std::cend(*ptr)) {
    //         std::cout << *ptr2 << std::endl;
    //         ptr2++;
    //     }
    //     ptr++;
    // }

    int x1 = 3;
    int& ref = x1;

    auto ref2 = ref;
    std::cout << std::is_same_v<decltype(ref2),int&> << std::endl;
    std::cout << std::is_same_v<decltype(ref2),int> << std::endl;

    au
}
