/**
 * @Description 函数指针
 * @Version 1.0.0
 * @Date 2024/4/1 9:29
 * @Author Kenton
 */

#include "iostream"

int fun(int x) {
    return x + 1;
}

int dec(int x) {
    return x - 1;
}

using K = int(int);

int Twice(K *fun, int x) {
    int tmp = (*fun)(x);
    return tmp * 2;
}

int main() {
//
//    using K = int[3];
//    K* a;
//
//    int (*a) [3];

    // 数组指针
    int arr[5] = {1, 2, 3, 4, 5};

    int (*array_ptr)[5] = &arr;

    int first_ele = (*array_ptr)[0];

    // 指针数组
    int *ptr_array[3];
    int a = 10;
    int b = 20;
    int c = 30;
    ptr_array[0] = &a;
    ptr_array[1] = &b;
    ptr_array[2] = &c;

    int value = *ptr_array[1];
}