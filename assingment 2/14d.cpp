#include <iostream>
using namespace std;
class bank
{
    int number;
    char holder_name[20];

public:
    void get()
    {
        cout << "Enter account number and name of the account holder" << endl;
        cin >> number >> holder_name;
    }
    void show()
    {
        cout << "\nOUTPUT: " << endl;
        cout << "Account number and name of the account holder is: "<< "\n"<< number << "\n"<< holder_name << endl;
    }
};

class saving : public bank
{
    int balance;

public:
    void getS()
    {
        cout << "Enter the balance" << endl;
        cin >> balance;
    }
    void showS()
    {
        if (balance <= 500)
        {
            cout << "Your account is savings account" << endl;
        }
    }
};

class current : public bank
{
    int balance;

public:
    void getC()
    {
        cout << "Enter the balance" << endl;
        cin >> balance;
    }
    void showC()
    {
        if (balance > 1000)
        {
            cout << "Your account is current account" << endl;
        }
    }
};

int main()
{
    int op;
    cout << "enter eihter 1 or 2 to know if you have savings account or current account" << endl;
    cin >> op;
    if (op == 1)
    {
        saving s;
        s.get();
        s.getS();
        s.show();
        s.showS();
    }
    else if (op == 2)
    {
        current c;
        c.get();
        c.getC();
        c.show();
        c.showC();
    }
    else
    {
        cout << "invalid input" << endl;
    }
    return 0;
}
