/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/3/31 18:54
 * @Author Kenton
 */

#include "iostream"
#include "vector"
#include "../head/head.h"
#include "initializer_list"



extern "C"
int Add(int x,int y){
    return x + y;
}

int Add(int x){
    return x;
}

int Sub(int x,int y ){
    return x - y;
}

void fun(int x,int y){

    std::cout << x << std::endl;
}

//void fun(int ,int y){
//
//}

struct Str{
    Str() = default;
    Str(const Str&){
        std::cout << "Copy construct is called\n";
    }
};

void fun(Str par){

}


void fun(int par){
    ++par;
}


void fun(int par[]){

}

void fun(int (*par)[4]){

}

void fun(std::initializer_list<int> par){

}

//void fun(int x,int y = 2,int z);
//
//void fun(int x,int y,int z = 3);
//
//void fun(int x = 1,int y,int z);

int func(int x){
    return x;
}


void fun2(){
    std::cout << "hello" << std::endl;
}

std::vector<int> fun(){
    std::cout << "Hello" << std::endl;
    return {1,2,3,4,5};
}

int & fun3(){
    static int x = 3;
    return x;
}

[[nodiscard]] int fun6(int a,iny b){
    return a + b;
}
//int fun4(int a,int b){
//    std::cout << a << ' ' << b << std::endl;
//}

auto fun4(int x,int y)->int{
    return x + y;
}

Str& fun5 (){
    static Str inst;
    return inst;
}

//decltype(auto) fun5(bool input){
//    int x = 3;
//    return (x);
//}

int main(int argc,char *argv[]){
    Str val;
    std::cout << Add(2,3) << std::endl;

    int z = Sub(2,3);
    std::cout << z << std::endl;


    // fun(1,2);

    // fun(val);

    fun(Str{});

    int arg = 3;
    // fun(arg);

    int a[3];
    auto b = a;
    fun(a);

    fun(b);

    int arr[3][4];
    fun(arr);

    fun({1,2,3,4,5});

    std::cout << func() << std::endl;

    if (argc != 3){
        std::cout << "Usgae:" << argv[0] << "param1 param2\n";
    }

    fun2();

    auto a_fun = fun();
    int& ref = fun3();

     auto& [v1,v2] = fun5();

     int x = fun6(2,3);
}
