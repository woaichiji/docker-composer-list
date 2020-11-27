//
// Created by yifei on 2020/11/25.
//

#ifndef CPP_FIRST_ANIMAL_H
#define CPP_FIRST_ANIMAL_H

#include <string>
#include <iostream>

using namespace std;

class Animal {
private:
    string name;
    uint8_t age;
public:
    const string &getName() const;

    void setName(const string &name);

    uint8_t getAge() const;

    void setAge(uint8_t age);

    Animal();

    Animal(const string &name, uint8_t age);

    virtual ~Animal();

public:


    void sayHello(string someone);
};

#endif //CPP_FIRST_ANIMAL_H
