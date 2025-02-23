#include <iostream>


class Thing {
public:
  Thing(std::string name)
      : name(name) {
    std::cout << "Constructing thing `" << name << "`"<< std::endl;
  }
  ~Thing() {
    std::cout << "Thing `" << name << "` destructed"<< std::endl;
  }
private:
  const std::string name;
};


class Foo {
public:
  Foo() {
    std::cout << "Constructing Foo" << std::endl;
    array = new Thing[2] { Thing("Foo"), Thing("Bar") };
    value = new Thing("Baz");
  }
  ~Foo() {
    delete[] array;
    delete value;
    std::cout << "Foo destructed" << std::endl;
  }
private:
  Thing *array;
  Thing *value;
};


int main() {
  Foo foo;
  return 0;
}
