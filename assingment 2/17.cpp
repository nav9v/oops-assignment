#include <iostream>
class Base
{
public:
    virtual void display()
    {
        std::cout << "Base class" << std::endl;
    }
};
class Derived1 : virtual public Base
{
public:
    void display() override
    {
        std::cout << "Derived1 class" << std::endl;
    }
};

class Derived2 : virtual public Base
{
public:
    void display() override
    {
        std::cout << "Derived2 class" << std::endl;
    }
};

class Diamond : public Derived1, public Derived2
{
public:
    void display() override
    {
        Derived1::display();
    }
};

int main()
{
    Diamond diamond;
    Base *basePtr = &diamond;
    basePtr->display();

    return 0;
}
