#include <iostream>

void friendFunction(int num);

void regularFunction(int num) {
    std::cout << "Inside regularFunction. Received number: " << num << std::endl;
}

int main() {
    int number = 82;
    regularFunction(number);
    friendFunction(number);
    return 0;
}

void friendFunction(int num) {
    std::cout << "Inside friendFunction. Received number: " << num << std::endl;
}
