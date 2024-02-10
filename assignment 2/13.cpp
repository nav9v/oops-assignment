#include <iostream>
using namespace std;
class MyNumber
{
public:
    MyNumber(int value) : value_(value) {}
    // Overload the unary minus (-) operator
    MyNumber operator-()
    {
        return MyNumber(-value_);
    }
    void display() const
    {
        cout << "Value: " << value_ << endl;
    }

private:
    int value_;
};

int main()
{
    MyNumber num(5);
    MyNumber negNum = -num;
    cout << "Negation: ";
    negNum.display();
    return 0;
}
