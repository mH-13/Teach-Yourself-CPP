#include <iostream>

// Function declaration
int add(int a, int b);

int main() {
    // Function call
    int sum = add(5, 3);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

//Reusability and Modular Programming