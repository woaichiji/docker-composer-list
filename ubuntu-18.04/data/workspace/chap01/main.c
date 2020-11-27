#include <stdio.h>
#include <net/if.h>


struct Person {
    int age;
    char x[4];
};
union Person2 {
    int age;
    char x[4];
};

void x() {
    printf("%d\n", 1);
}

int main() {
    struct Person person;
    union Person2 person2;
    person2.age = 0x61626364;
    printf("%d\n", sizeof(person2));
    x(1, 2, 3, 6, 4);
    return 0;
}
