#include <iostream>

struct A {

    A() {
        std::cout << "Constructor called" << std::endl;
        x = 0;
        y = 0;
    }

    A(const A &a) {
        std::cout << "Copy constructor called" << std::endl;
        x = a.x;
        y = a.y;
    }

    int x;
    int y;
};


class B {
public:
    B() { }

    A &getFoo() { return foo; }

    A foo;
};


int main() {
    B b;
    A &a = b.getFoo();
    a.x = 10;
    return 0;
}
