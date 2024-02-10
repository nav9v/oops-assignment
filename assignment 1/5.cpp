
#include <iostream>
using namespace std;

class Test {
public:
    static int count;
    
    static void increment() {
        count++;
    }

    static int getcount() {
        return count;
    }
};

int Test::count = 0;

int main() {
    Test t1, t2, t3;
    t1.increment();
    t2.increment();
    t3.increment();

    cout << "The count is: " << Test::getcount() << endl;
    return 0;
}
