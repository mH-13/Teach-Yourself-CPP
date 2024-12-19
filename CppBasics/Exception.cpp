#include <iostream>

int main() {
    try {
        int age = 15;
        if (age < 18) {
            throw std::runtime_error("Age is less than 18");
        }
    } catch (const std::runtime_error &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}