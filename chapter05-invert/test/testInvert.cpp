/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/3/23 16:23
 * @Author Kenton
 */

#include <algorithm>
#include <iostream>

int fun(void* par,int t) {
    if (t == 1) {
        int *ptr = static_cast<int*>(par);
    }else if (t == 2) {
        double *ptr = static_cast<double*>(par);
    }
}
int main() {
    // int x = 3;
    // int y = 4;
    // std::cout << static_cast<double>(x / y) << std::endl;
    //
    // int *ptr;
    // void* v = ptr;
    //
    // int *ptr2 = static_cast<int*>(v);

    int x = 3;
    const int& ref = 3;
    int& ref2 = const_cast<int&>(ref);

    // constexpr int a = 10;
    const int a = 10;
    int *ptr = const_cast<int*>(&a);
    // const_cast临时修改const属性
    *ptr = 20;
    std::cout << *ptr << std::endl;
    std::cout << a << std::endl;
   //  double y = reinterpret_cast<double>(x);


    std::cout << (true ? 3 : 5) << std::endl;
}
