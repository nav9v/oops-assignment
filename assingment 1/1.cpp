/1.	Inline function without classes
#include <iostream>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int result = add(num1, num2);
    
    std::cout << "Result of adding " << num1 << " and " << num2 << " is: " << result << std::endl;
    
    return 0;
}
