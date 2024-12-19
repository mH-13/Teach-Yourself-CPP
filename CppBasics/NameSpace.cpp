#include <iostream>

// Define a namespace
namespace FirstNamespace {
    void displayMessage() {
        std::cout << "This is the first namespace." << std::endl;
    }
}

namespace SecondNamespace {
    void displayMessage() {
        std::cout << "This is the second namespace." << std::endl;
    }
}

int main() {
    // Call functions from different namespaces
    FirstNamespace::displayMessage();
    SecondNamespace::displayMessage();

    return 0;
}