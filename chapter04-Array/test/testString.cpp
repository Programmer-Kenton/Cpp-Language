/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/3/23 14:57
 * @Author Kenton
 */

#include <iostream>
#include <cstring>

int main() {
    std::string x = "Hello World";
    std::string y = x;
    y = y + "!";

    std::cout << (y < x ) << '\n';
    y = "New String" + y;
    std::cout << y;

    y = std::string("Hello") + "World" + x;
    std::cout << y << std::endl;

    std::cout << "----------------" << std::endl;
    auto ptr = y.c_str();
    std::cout << ptr << std::endl;

    std::cout << "----------------" << std::endl;

    std::string str = "Hello";
    const char* b =str.c_str();
    std::cout << b << std::endl;

    str += "World";
    std::cout << b <<std::endl;
    printf("%s\n",str.c_str());
}
