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


/*
#include <iostream>
using namespace std;

int main() {
    try {
        int divisor = 0;
        if (divisor == 0) {
            throw runtime_error("Division by zero error!");
        }
        cout << 10 / divisor << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
*/