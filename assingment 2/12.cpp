#include <iostream>
using namespace std;
int main()
{
    int *intValue = new int;
    *intValue = 42;
    cout << "Dynamically allocated integer: " << *intValue << endl;
    int *intArray = new int[5];
    for (int i = 0; i < 5; i++)
    {
        intArray[i] = i * 10;
    }

    std::cout << "Dynamically allocated integer array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << intArray[i] << " ";
    }
    cout << endl;
    delete intValue;
    delete[] intArray;

    return 0;
}
