#include <iostream>
using namespace std;
class student
{
    int id;
    char name[20];

public:
    void geetdata()
    {
        cout << "enter the name and id of student" << endl;
        cin >> name >> id;
    }
    void putdata()
    {
        cout << "name of student is " << name << " and id is " << id << endl;
    }
};
// intermediate base class
class marks
{
protected:
    int m1, m2, m3;

public:
    void getmarks()
    {
        cout << "enter the marks of three subjects" << endl;
        cin >> m1 >> m2 >> m3;
    }
    void putmarks()
    {
        cout << "marks of three subjects are " << m1 << " " << m2 << " " << m3 << endl;
    }
};
// derived class
class result : public student, public marks
{
    int total;

public:
    void display()
    {
        total = m1 + m2 + m3;
        putdata();  // calling base class function
        putmarks(); // callin the intermediate class fumction
        cout << "total marks are " << total << endl;
    }
};

int main()
{
    result r;
    r.geetdata();
    r.getmarks();
    r.display();
    return 0;
}
