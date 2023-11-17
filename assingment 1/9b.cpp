#include <iostream>

class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    friend void showPrivateData(const MyClass& obj);
};

void showPrivateData(const MyClass& obj) {
    std::cout << "Private Data: " << obj.privateData << std::endl;
}

int main() {
    MyClass obj(67);
    showPrivateData(obj);
    return 0;
}
