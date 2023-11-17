
#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
    char name[20];
    unsigned int id;
    float hourlyRate;
    unsigned int workHours;

public:
    void get()
    {
        cout << "Enter name, id, hourlyRate and workHours :";
        cin >> name >> id >> hourlyRate >> workHours;
    }
    void put()
    {
        cout << "Name is :" << name << endl;
        cout << "Id is :" << id << endl;
        cout << "HourlyRate is :" << hourlyRate << endl;
        cout << "WorkHours is :" << workHours << endl;
    }
    void update(char n[])
    {
        if (strcmp(name, n) == 0)
        {
            cout << "Enter new name, id, hourlyRate and workHours :";
            cin >> name >> id >> hourlyRate >> workHours;
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
    float getHourlyRate()
    {
        return hourlyRate;
    }
    int getWorkHours()
    {
        return workHours;
    }
    void setWorkHours(int w)
    {
        workHours = w;
    }
};
int main()
{

    int n;
    cout << "Enter number of employees :";
    cin >> n;
    Employee e[n];
    float sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        e[i].get();
    }
    int choice;
    do
    {
        cout << "Enter 1 to add, 2 to update, 3 to remove, 4 to calculate and display salaries, 5 to generate payroll reports, 6 to handle overtime and deductions and 0 to exit :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter name, id, hourlyRate and workHours :";
            e[n].get();
            n++;
            break;
        case 2:
            char name[20];
            cout << "Enter name of employee to update :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                e[i].update(name);
            }
            break;
        case 3:
            char name1[20];
            cout << "Enter name of employee to remove :";
            cin >> name1;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(e[i].getName(), name1) == 0)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        e[j] = e[j + 1];
                    }
                    n--;
                    break;
                }
            }
            break;
        case 4:
            for (int i = 0; i < n; i++)
            {
                cout << "Salary of " << e[i].getName() << " is :" << e[i].getHourlyRate() * e[i].getWorkHours() << endl;
            }
            break;
        case 5:
            for (int i = 0; i < n; i++)
            {
                cout << "Salary of " << e[i].getName() << " is :" << e[i].getHourlyRate() * e[i].getWorkHours() << endl;
                sum += e[i].getHourlyRate() * e[i].getWorkHours();
            }
            cout << "Total salary is :" << sum << endl;
            break;
        case 6:
            for (int i = 0; i < n; i++)
            {
                if (e[i].getWorkHours() > 40)
                {
                    cout << "Salary of " << e[i].getName() << " is :" << e[i].getHourlyRate() * e[i].getWorkHours() * 1.5 << endl;
                }
                else
                {
                    cout << "Salary of " << e[i].getName() << " is :" << e[i].getHourlyRate() * e[i].getWorkHours() << endl;
                }
            }
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 0);
}