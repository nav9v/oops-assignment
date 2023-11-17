#include <iostream>
using namespace std;

class Calculator
{
    int a, b;
    char op;

public:
    void get()
    {
        cout << "Enter two numbers and an operator:" << endl;
        cin >> a >> b >> op;
    }
    void put();
};

void Calculator::put()
{

    switch (op)
    {
    case '+':
        cout << "Sum is " << a + b << endl;
        break;
    case '-':
        cout << "Difference is " << a - b << endl;
        break;
    case '*':
        cout << "Product is " << a * b << endl;
        break;
    case '/':
        if (b == 0)
            cout << "Division by zero not possible" << endl;
        else
            cout << "Quotient is " << a / b << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }
}

int main()
{
    Calculator c;
    cout << "enter (+,-,*,/) to perform the corresponding operation)" << endl;
    c.get();
    c.put();
}