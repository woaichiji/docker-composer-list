#include <iostream>
#include "Animal.h"

struct Person {
    char *name;
};

string show(string str) {
    return str.append("show");
}

void x(int mode = 1) {
    printf("%d\n", 1);
}

int main() {
//    Person person = {"1111111"};
//    cout << person.name << endl;
//    Animal animal;
//    animal.setAge(15);
//    animal.setName("adsfadfasdf");
//    animal.sayHello("adsfadfasasdfasdfdffsafasdf");
    std::cout << hex << showbase << 2 << std::endl;
    return 0;
}
