#include <iostream>
using namespace std;
class base
{
public:
    virtual void show() = 0;
};
class derived : public virtual base
{
public:
    void show()
    {
        cout << "Derived class show()" << endl;
    }
};
int main()
{
    derived d;
    d.show();
    return 0;
}
