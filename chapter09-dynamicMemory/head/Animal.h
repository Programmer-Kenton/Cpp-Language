/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/4/9 11:14
 * @Author Kenton
 */
#ifndef INC_09SHENLAN_ANIMAL_H
#define INC_09SHENLAN_ANIMAL_H
#include "iostream"

class Animal {
public:

    explicit Animal(const std::string &name);

    Animal();

    virtual ~Animal();

    void printInfo();

    std::string getName() const;

    void setName(std::string name);

private:
    std::string name;
};


#endif //INC_09SHENLAN_ANIMAL_H
