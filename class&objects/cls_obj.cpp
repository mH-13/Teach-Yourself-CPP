#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void displayDetails() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.year = 2020;

    car1.displayDetails();
    return 0;
}
