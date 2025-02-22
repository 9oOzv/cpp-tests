
struct Foo {
    int x;
    int y;
};


class A {
public:
    A() : foo(new Foo()){
    }
    const Foo * const foo;
    const Foo * bar;
};


class B {
public:
    B() {
        foo = new Foo();
    }
    Foo *foo;
};


int main() {
    A a;
    // a.foo = new Foo();  // Fails
    // a.foo->x = 10;  // Fails
    a.bar = new Foo();  // Works
    // a.bar->x = 10;  // Fails
    const B b;
    // b.foo = new Foo(); // Fails
    b.foo->x = 10;  // Works
}
