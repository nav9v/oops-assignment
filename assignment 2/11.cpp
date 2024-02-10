#include <iostream>
using namespace std;
class Person
{
public:
    int age;

    Person(int age)
    {
        this->age = age;
    }

    void introduce()
    {
        cout << "I am " << this->age << " years old." << endl;
    }
};

int main()
{
    Person person1(25);
    person1.introduce();

    Person person2(30);
    person2.introduce();

    return 0;
}
