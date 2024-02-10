#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "\nConstructor executed";
    }

    ~Test() {
        cout << "\nDestructor executed";
    }
};

int main() {
    Test t;
    return 0;
}
