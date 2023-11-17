
#include <iostream>
using namespace std;

void display(int x) {
    cout << "The number is " << x << endl;
}

void display(double x) {
    cout << "The number is " << x << endl;
}

int main() {
    int a = 20;
    double b = 100.0;

    display(a);
    display(b); 

    return 0;
}
