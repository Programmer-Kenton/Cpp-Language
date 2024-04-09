/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/4/1 8:53
 * @Author Kenton
 */


#include "iostream"
#include "../head/inlineHead.h"

//constexpr int x = 3;

constexpr int fun2(){
    return 3;
}

constexpr int x = fun2();

int main(){
    fun();

    std::cout << fun2();

    std::cout << x;
}