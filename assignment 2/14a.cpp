#include <iostream>
using namespace std;
// base class or student class
class student
{
    int id;
    int roll;
    char name[20];

public:
    void getdata()
    {
        cout << "enter the id" << endl;
        cin >> id;
        cout << "enter the roll" << endl;
        cin >> roll;
        cout << "enter the name" << endl;
        cin >> name;
    }
    void showdata()
    {
        cout << "id is " << id << endl;
        cout << "roll is " << roll << endl;
        cout << " name is " << name << endl;
    }
};

// derived class or child class
class marks : public student
{
    int m1, m2, m3;

public:
    void getmarks()
    {
        cout << "enter the marks of three subjects" << endl;
        cin >> m1 >> m2 >> m3;
    }
    void showmarks()
    {
        cout << "marks of three subjects are " << m1 << " " << m2 << " " << m3 << endl;
    }
};
int main()
{
    marks m;
    m.getdata();
    m.getmarks();
    m.showdata();
    m.showmarks();
    return 0;
}
