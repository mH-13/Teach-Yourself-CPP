#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person person1; // Create an instance of Person

    // Set values for the instance's attributes
    person1.name = "Alice";
    person1.age = 30;

    // Print the values of the attributes
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;

    return 0;
}