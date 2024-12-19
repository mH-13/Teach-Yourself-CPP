#include <iostream>

// Function template to find the maximum of two values
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Call the template function with different types
    std::cout << "Max of 3 and 7: " << getMax(3, 7) << std::endl;
    std::cout << "Max of 3.5 and 2.1: " << getMax(3.5, 2.1) << std::endl;
    std::cout << "Max of 'g' and 'e': " << getMax('g', 'e') << std::endl;

    return 0;
}