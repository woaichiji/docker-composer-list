//
// Created by yifei on 2020/11/25.
//

#include "Animal.h"

void Animal::sayHello(string someone) {
    cout << "hello " + someone << endl;
}

const string &Animal::getName() const {
    return name;
}

void Animal::setName(const string &name) {
    Animal::name = name;
}

uint8_t Animal::getAge() const {
    return age;
}

void Animal::setAge(uint8_t age) {
    Animal::age = age;
}

Animal::Animal(const string &name, uint8_t age) : name(name), age(age) {}

Animal::Animal() {}

Animal::~Animal() {
    cout << "~" << endl;
}
