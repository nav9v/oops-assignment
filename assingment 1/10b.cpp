#include <iostream>

class MyClass {
public:
    MyClass(int value) {
        this->value = value;
    }

    void displayValue() {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main() {
    MyClass obj1(45);
    obj1.displayValue();

    MyClass obj2(700);
    obj2.displayValue();

    return 0;
}
