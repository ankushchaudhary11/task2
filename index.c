#include <iostream>

int main() {
    std::cout << "Even numbers from 1 to 100:" << std::endl;
    
    for (int i = 1; i <= 100; i++) {
        // Use modulo operator to check if number is even
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
        // Skip odd numbers (they don't enter the if block)
    }
    
    std::cout << std::endl;
    return 0;
}