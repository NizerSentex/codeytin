#include <iostream>

int main() {
    int multiplier = 5;
    
    std::cout << "Multiplication Table for 5:" << std::endl;
    
    for (int i = 1; i <= 10; ++i) {
        std::cout << multiplier << " * " << i << " = " << multiplier * i << std::endl;
    }

    return 0;
}
