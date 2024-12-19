#include <iostream>

int main() {
    int var = 20;   // Actual variable declaration
    int *ptr;       // Pointer variable

    ptr = &var;     // Store address of var in pointer variable

    // Print the value and address of var, and the value stored in the pointer
    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Value stored in ptr: " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl; // Dereferencing pointer

    return 0;
}