#include <iostream>

int main() {
    // Declare and initialize an array
    int numbers[] = {10, 20, 30, 40, 50};

    // Access elements of the array
    for (int i = 0; i < 5; i++) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    return 0;
}