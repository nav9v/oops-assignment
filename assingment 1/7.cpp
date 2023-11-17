#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    int y;

    MyClass(int a, int b);

    void display();
    void addValues();
};

MyClass::MyClass(int a, int b) {
    x = a;
    y = b;
}

void MyClass::display() {
    cout << "x = " << x << ", y = " << y << endl;
}

void MyClass::addValues() {
    int sum = x + y;
    cout << "Sum of x and y is: " << sum << endl;
}

int main() {
    MyClass obj(99, 44);
    obj.display();
    obj.addValues();

    return 0;
}
