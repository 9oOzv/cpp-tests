#include <iostream>


class A {
public:
    A() {
        values = new int[3];
        values[0] = 1;
        values[1] = 2;
        values[2] = 3;
    }

    ~A() {
        delete[] values;
    }

    // Return reference to the values array
    int *getValues() {
        return values;
    }

private:
    int *values;
    
};


class B {
public:
    B() {
        a = A();
    }

    A getA() {
        return a;
    }


private:
    A a;
};


int main() {
    B b;
    B c = b;
}
