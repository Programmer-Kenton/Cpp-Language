/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/4/9 11:14
 * @Author Kenton
 */
#include "../head/Animal.h"


Animal::Animal(const std::string &name) : name(name) {
    std::cout << "有参的Animal"  << std::endl;
}

Animal::Animal() {
    std::cout << "无参的Animal"  << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal析构函数被调用" << std::endl;
}

void Animal::printInfo() {
    std::cout << "Animal name :" << name << std::endl;
}

std::string Animal::getName() const{
    return name;
}

void Animal::setName(std::string name) {
    this->name = name;
}
