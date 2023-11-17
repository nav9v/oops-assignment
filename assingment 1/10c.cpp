#include <iostream>

class MyClass {
public:
    MyClass(int value) : data(value) {
        std::cout << "Constructor called" << std::endl;
    }

    MyClass(const MyClass& other) : data(other.data) {
        std::cout << "Copy constructor called" << std::endl;
    }

    void display() {
        std::cout << "Data: " << data << std::endl;
    }

private:
    int data;
};

int main() {
    MyClass obj1(55);
    MyClass obj2(obj1);

    std::cout << "Object 1: ";
    obj1.display();

    std::cout << "Object 2: ";
    obj2.display();

    return 0;
}
