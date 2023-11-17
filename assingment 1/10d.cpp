#include <iostream>
using namespace std;

class MyClass {
private:
    int num1;
    int num2;

public:
    MyClass() {
        num1 = 0;
        num2 = 0;
    }

    MyClass(int n) {
        num1 = n;
        num2 = 0;
    }

    MyClass(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    void display() {
        cout << "num1: " << num1 << ", num2: " << num2 << endl;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(29);
    MyClass obj3(90, 40);

    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2: ";
    obj2.display();

    cout << "Object 3: ";
    obj3.display();

    return 0;
}
