#include <iostream>

int main() {
    int var = 10;
    int &ref = var; // Reference to var

    // Print the value of var and the reference
    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Reference to var: " << ref << std::endl;

    ref = 20; // Change value through reference

    // Print the new value of var
    std::cout << "New value of var: " << var << std::endl;
    return 0;
}