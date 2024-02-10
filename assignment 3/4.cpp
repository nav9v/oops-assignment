#include <iostream>
#include <string.h>
using namespace std;
class Account
{
    char name[20];
    int id;
    float balance;
    char type[20];

public:
    void get()
    {
        cout << "Enter name, id, balance and type :";
        cin >> name >> id >> balance >> type;
    }
    void put()
    {
        cout << "Name is :" << name << endl;
        cout << "Id is :" << id << endl;
        cout << "Balance is :" << balance << endl;
        cout << "Type is :" << type << endl;
    }
    void update(char n[])
    {
        if (strcmp(name, n) == 0)
        {
            cout << "Enter new name, id, balance and type :";
            cin >> name >> id >> balance >> type;
        }
    }
    char *getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    float getBalance()
    {
        return balance;
    }
    void setBalance(float b)
    {
        balance = b;
    }
};
int main()
{
    int n;
    cout << "Enter number of accounts :";
    cin >> n;
    Account a[n];
    float sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        a[i].get();
    }
    int choice;
    char name[20];
    do
    {
        cout << "Enter 1 to display all accounts" << endl;
        cout << "Enter 2 to display account details" << endl;
        cout << "Enter 3 to update account details" << endl;
        cout << "Enter 4 to deposit money" << endl;
        cout << "Enter 5 to withdraw money" << endl;
        cout << "Enter 6 to exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                a[i].put();
            }
            break;
        case 2:
            cout << "Enter name of account holder :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(a[i].getName(), name) == 0)
                {
                    a[i].put();
                }
            }
            break;
        case 3:
            cout << "Enter name of account holder :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(a[i].getName(), name) == 0)
                {
                    a[i].update(name);
                }
            }
            break;
        case 4:
            cout << "Enter name of account holder :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(a[i].getName(), name) == 0)
                {
                    float amount;
                    cout << "Enter amount to deposit :";
                    cin >> amount;
                    a[i].setBalance(a[i].getBalance() + amount);
                    break;
                }
            }
            break;
        case 5:
            cout << "Enter name of account holder :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(a[i].getName(), name) == 0)
                {
                    float amount;
                    cout << "Enter amount to withdraw :";
                    cin >> amount;
                    if (amount > a[i].getBalance())
                    {
                        cout << "Insufficient balance" << endl;
                    }
                    else
                    {
                        a[i].setBalance(a[i].getBalance() - amount);
                    }
                    break;
                }
            }
            break;
        case 6:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 6);
}