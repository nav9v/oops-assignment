#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two numbers:";
    cin >> a;
    cin >> b;
    try
    {

        if (b == 0)
        {
            throw b;
        }
        else
        {
            cout << "a/b=" << a / b << endl;
        }
    }
    catch (int i)
    {
        cout << "Exception caught: divide by zero" << endl;
    }
    return 0;
}
