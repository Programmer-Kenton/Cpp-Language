/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/4/5 18:58
 * @Author Kenton
 */

#include "iostream"
#include "memory"
#include "../head/Animal.h"

using namespace std;
//
//int *fun() {
//    int *res = new int(2);
//    return res;
//}
//
//struct Str {
//};

void customDeleter(int *ptr) {
    delete ptr;
}

int main() {

//    int* y = fun();
//    std::cout << *y << std::endl;
//    std::cout << y << std::endl;
//
//    delete y;

//    int *y = new int[5]{};
//    if (!y){
//        std::cerr << "allocate error";
//    }
//    std::cout << y[2] << std::endl;
//    delete[] y;

//    char ch[sizeof(int)];
//    // 不需要在堆上开辟内存 在ch的首地址开始存储四个单位的int
//    auto *y = new (ch)int[4];
//
//    std::cout << y << std::endl;

//int* y = new auto(3);

//    Str *ptr = new Str();
//
//    std::cout << ptr << std::endl;

//int* ptr = new int[5];
//delete[] ptr;

//int* x = 0;
//delete x;

//int* ptr = new int(3);
//std::cout << ptr << std::endl;
//delete ptr;
//std::cout << ptr << std::endl;

//    std::shared_ptr<int> x(new int(3));
//    std::shared_ptr<int> y = x;

// 1.创建shared_ptr
//std::shared_ptr<int> p1(new int(42));
//std::shared_ptr<int> p2 = std::make_shared<int>(42);
//
//// 2.复制shared_ptr 当复制shared_ptr时 引用计数器会增加
//std::shared_ptr<int> p3 = p1; // p1和p3现在共享同一个int对象
//*p1 = 100;
//int x = *p2;
//
//// 访问shared_ptr指向的对象
//cout << "p1 = " << *p1 << " p2 = " << *p2 << endl;
//
//// 4.重置shared_ptr
//// 将shared_ptr重置为不指向任何对象或指向另一个对象 这可能会导致之前指向的对象的删除
//p1.reset();
//p2.reset(new int(200));
//
//// 获取引用计数
//cout << p2.use_count() << endl;
//
//// 在使用shared_ptr应尽量避免使用原始指针与其交互
//// 这可能会导致内存管理问题 总是尽量使shared_ptr或其他智能指针来管理动态分配的内存
//std::shared_ptr<int> p4(new int(50), customDeleter);

    // Stack
//    Animal a1("Dog");
//    a1.getName();
//    // 自动调用析构
//
//    {
//        Animal a2("猫");
//        const string &a2Name = a2.getName();
//        std::cout << a2Name << std::endl;
//    }


    // Heap
//    {
//        Animal *a3 = new Animal("金毛");
//        const string &a3Name = a3->getName();
//
//        // 没有调用析构 需要手动释放
//        delete a3;
//    }
//
//    {
//        std::unique_ptr<Animal> a4 {new Animal("喵喵")};
//        a4->getName();
//    }

    {
        std::unique_ptr<Animal> a5 = make_unique<Animal>();
        a5->getName();
    }
}


