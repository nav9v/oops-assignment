#include <iostream>
#include <string.h>
using namespace std;
class Contact
{
    char name[20];
    char phone[20];
    char email[20];

public:
    void get()
    {
        cout << "Enter name, phone and email :";
        cin >> name >> phone >> email;
    }
    void put()
    {
        cout << "Name is :" << name << endl;
        cout << "Phone is :" << phone << endl;
        cout << "Email is :" << email << endl;
    }
    void update(char n[])
    {
        if (strcmp(name, n) == 0)
        {
            cout << "Enter new name, phone and email :";
            cin >> name >> phone >> email;
        }
    }
    char *getName()
    {
        return name;
    }
    char *getPhone()
    {
        return phone;
    }
    char *getEmail()
    {
        return email;
    }
    void setPhone(char p[])
    {
        strcpy(phone, p);
    }
    void setEmail(char e[])
    {
        strcpy(email, e);
    }
};
int main()
{
    int n;
    cout << "Enter number of contacts :";
    cin >> n;
    Contact c[n];
    for (int i = 0; i < n; i++)
    {
        c[i].get();
    }
    int choice;
    char name[20];
    char phone[20];
    char email[20];
    while (1)
    {
        cout << "Enter 1 to add contact" << endl;
        cout << "Enter 2 to update contact" << endl;
        cout << "Enter 3 to delete contact" << endl;
        cout << "Enter 4 to search contact" << endl;
        cout << "Enter 5 to display all contacts" << endl;
        cout << "Enter 6 to exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter name, phone and email :";
            cin >> name >> phone >> email;
            strcpy(c[n].getName(), name);
            strcpy(c[n].getPhone(), phone);
            strcpy(c[n].getEmail(), email);
            n++;
            break;
        case 2:
            cout << "Enter name of contact to update :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                c[i].update(name);
            }
            break;
        case 3:
            cout << "Enter name of contact to delete :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(c[i].getName(), name) == 0)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        c[j] = c[j + 1];
                    }
                    n--;
                    break;
                }
            }
            break;
        case 4:
            cout << "Enter name of contact to search :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(c[i].getName(), name) == 0)
                {
                    c[i].put();
                    break;
                }
            }
            break;
        case 5:
            for (int i = 0; i < n; i++)
            {
                c[i].put();
            }
            break;
        case 6:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        if (choice == 6)
        {
            break;
        }
    }
}