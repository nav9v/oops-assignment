#include <iostream>
using namespace std;
// hybrid inheritance is a combination of more than one type of inheritance.
// it is called as multi path inheritance.
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

class sports
{
protected:
    int score;

public:
    void getscore()
    {
        cout << "enter the score" << endl;
        cin >> score;
    }
    void showscore()
    {
        cout << "\nscore is: " << score << endl;
    }
};

class result : public marks, public sports
{
    int total;
    int average;

public:
    void showresult()
    {
        total = m1 + m2 + m3;
        average = total / 3;
        cout << "total: "<< "\n"<< total << endl;
        cout << "average: "<< "\n"<< average << endl;
        cout << "score: " << score << endl;
    }
};
int main()
{
    result r;
    r.getdata();
    r.getmarks();
    r.getscore();
    r.showdata();
    r.showmarks();
    r.showscore();
    r.showresult();
    return 0;
}
