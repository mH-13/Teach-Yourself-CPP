#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Eating..." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Barking..." << std::endl;
    }
};

int main() {
    Dog myDog; // Create an object of Dog

    // Call methods from the base class and derived class
    myDog.eat();  // Inherited method
    myDog.bark(); // Own method

    return 0;
}