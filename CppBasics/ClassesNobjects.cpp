#include <iostream>
#include <string>

// Define a class
class Car {
public:
    std::string brand;
    std::string model;
    int year;

    // Method to display information about the car
    void displayInfo() {
        std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    Car myCar;  // Create an object of Car

    // Set values for the object's attributes
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2020;

    // Call the method to display information
    myCar.displayInfo();

    return 0;
}