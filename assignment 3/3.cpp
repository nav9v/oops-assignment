#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    char name[20];
    int id;
    float grade;

public:
    void get()
    {
        cout << "Enter name, id and grade :";
        cin >> name >> id >> grade;
    }
    void put()
    {
        cout << "Name is :" << name << endl;
        cout << "Id is :" << id << endl;
        cout << "Grade is :" << grade << endl;
    }
    void update(char n[])
    {
        if (strcmp(name, n) == 0)
        {
            cout << "Enter new name, id and grade :";
            cin >> name >> id >> grade;
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
    float getGrade()
    {
        return grade;
    }
    void setGrade(float g)
    {
        grade = g;
    }
};
int main()
{
    int n;
    cout << "Enter number of students :";
    cin >> n;
    Student s[n];
    float sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        s[i].get();
    }
    int choice;
    char name[20];
    do
    {
        cout << "Enter 1 to search, 2 to update, 3 to assign grade, 4 to display average grade, 5 to display highest and lowest grade and 0 to exit :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter name of student to search :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(s[i].getName(), name) == 0)
                {
                    s[i].put();
                    break;
                }
            }
            break;
        case 2:
            cout << "Enter name of student to update :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                s[i].update(name);
            }
            break;
        case 3:
            cout << "Enter name of student to assign grade :";
            cin >> name;
            float grade;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(s[i].getName(), name) == 0)
                {
                    cout << "Enter grade :";
                    cin >> grade;
                    s[i].setGrade(grade);
                    break;
                }
            }
            break;
        case 4:
            for (int i = 0; i < n; i++)
            {
                if (s[i].getGrade())
                {
                    sum += s[i].getGrade();
                    count++;
                }
            }
            if (count > 0)
            {
                cout << "Average grade is :" << sum / count << endl;
            }
            else
            {
                cout << "No grades assigned yet." << endl;
            }
            break;

        case 5:

            float max = s[0].getGrade(), min = s[0].getGrade();
            for (int i = 1; i < n; i++)
            {
                if (s[i].getGrade() > max)
                {
                    max = s[i].getGrade();
                }
                if (s[i].getGrade() < min)
                {
                    min = s[i].getGrade();
                }
            }
            cout << "Highest grade is :" << max << endl;
            cout << "Lowest grade is :" << min << endl;
            break;
        }
    } while (choice != 0);
}