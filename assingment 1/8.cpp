#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    double marks;

    Student(string n, int rn, double m) {
        name = n;
        rollNumber = rn;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    const int numStudents = 3;
    Student students[numStudents] = {
        Student("Ansh",234, 92.5),
        Student("Joe", 235, 98.0),
        Student("Ash", 236, 88.5)
    };

    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ":\n";
        students[i].display();
        cout << endl;
    }

    return 0;
}
