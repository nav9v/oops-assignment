#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Default constructor called" << std::endl;
    }

    void displayMessage() {
        std::cout << "Hello Everyone!" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.displayMessage();
    return 0;
}
