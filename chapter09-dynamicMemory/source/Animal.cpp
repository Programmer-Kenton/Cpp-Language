/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/4/9 11:14
 * @Author Kenton
 */
#include "../head/Animal.h"


Animal::Animal(const std::string &name) : name(name) {
    std::cout << "�вε�Animal"  << std::endl;
}

Animal::Animal() {
    std::cout << "�޲ε�Animal"  << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal��������������" << std::endl;
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
