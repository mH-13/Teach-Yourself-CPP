#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    // Call the overloaded functions
    std::cout << "Sum of 2 and 3: " << add(2, 3) << std::endl;
    std::cout << "Sum of 1, 2, and 3: " << add(1, 2, 3) << std::endl;

    return 0;
}