#include <iostream>
using namespace std;
// base class
class student
{
    int id;
    char name[20];

public:
    void getdata()
    {
        cout << "enter id and name of the sudent" << endl;
        cin >> id >> name;
    }
    void showdata()
    {
        cout << "output: " << endl;
        cout << "id and name of the student is: "<< "\n"<< id << "\n"<< name << endl;
    }
};
// derived class and base for result class
class marks : public student
{
protected:
    int m1, m2, m3;

public:
    void getmarks()
    {
        cout << "enter marks of three subjects" << endl;
        cin >> m1 >> m2 >> m3;
    }
    void showmarks()
    {
        cout << "marks of the three subjects are: "<< "\n"<< m1 << "\n"<< m2 << "\n"<< m3;
    }
};
// derived class from marks class
class result : public marks
{
    int total;
    int average;

public:
    void showresult()
    {
        total = m1 + m2 + m3;
        average = total / 3;
        cout << "\ntotal: "<< "\n"<< total << endl;
        cout << "average: "<< "\n"<< average << endl;
    }
};

int main()
{
    result r;
    r.getdata();
    r.getmarks();
    r.showdata();
    r.showmarks();
    r.showresult();
    return 0;
}
