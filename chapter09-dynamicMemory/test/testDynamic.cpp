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
//    // ����Ҫ�ڶ��Ͽ����ڴ� ��ch���׵�ַ��ʼ�洢�ĸ���λ��int
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

// 1.����shared_ptr
//std::shared_ptr<int> p1(new int(42));
//std::shared_ptr<int> p2 = std::make_shared<int>(42);
//
//// 2.����shared_ptr ������shared_ptrʱ ���ü�����������
//std::shared_ptr<int> p3 = p1; // p1��p3���ڹ���ͬһ��int����
//*p1 = 100;
//int x = *p2;
//
//// ����shared_ptrָ��Ķ���
//cout << "p1 = " << *p1 << " p2 = " << *p2 << endl;
//
//// 4.����shared_ptr
//// ��shared_ptr����Ϊ��ָ���κζ����ָ����һ������ ����ܻᵼ��֮ǰָ��Ķ����ɾ��
//p1.reset();
//p2.reset(new int(200));
//
//// ��ȡ���ü���
//cout << p2.use_count() << endl;
//
//// ��ʹ��shared_ptrӦ��������ʹ��ԭʼָ�����佻��
//// ����ܻᵼ���ڴ�������� ���Ǿ���ʹshared_ptr����������ָ��������̬������ڴ�
//std::shared_ptr<int> p4(new int(50), customDeleter);

    // Stack
//    Animal a1("Dog");
//    a1.getName();
//    // �Զ���������
//
//    {
//        Animal a2("è");
//        const string &a2Name = a2.getName();
//        std::cout << a2Name << std::endl;
//    }


    // Heap
//    {
//        Animal *a3 = new Animal("��ë");
//        const string &a3Name = a3->getName();
//
//        // û�е������� ��Ҫ�ֶ��ͷ�
//        delete a3;
//    }
//
//    {
//        std::unique_ptr<Animal> a4 {new Animal("����")};
//        a4->getName();
//    }

    {
        std::unique_ptr<Animal> a5 = make_unique<Animal>();
        a5->getName();
    }
}


