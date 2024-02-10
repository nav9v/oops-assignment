#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base default constructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor" << endl;
    }
};

int main()
{
    Derived d; // Calls Base default constructor, then Derived constructor
    return 0;
}
