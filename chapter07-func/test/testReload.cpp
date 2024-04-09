/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/3/31 21:25
 * @Author Kenton
 */

#include "iostream"
#include "vector"

void fun(int){
    std::cout << "fun() is called\n";
}

void fun2(){
    std::cout << "fun()2 is called\n";
}

void fun(double){
    std::cout << "double() is called\n";
}

namespace MyNS{
    void fun(){
        std::cout << "MyNS::fun is called\n";
    }

    void g(){
        fun();
    }
}


template <typename T>
void fun(T x){
    g(x);
}

namespace My{
    struct Str{};

    void g(Str x){};
}

int main(){
    ::fun(1);

    MyNS::fun();

   My::Str obj;
   g(obj);

}