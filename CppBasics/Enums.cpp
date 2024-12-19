#include <iostream>
//Use Case: Define an enum to represent a set of named integer constants.
enum Color { RED, GREEN, BLUE };

int main() {
    Color myColor = RED;

    // Use an if statement to check the value of the enum
    if (myColor == RED) {
        std::cout << "Color is red" << std::endl;
    }

    return 0;
}