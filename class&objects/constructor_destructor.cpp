#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    // Constructor
    Car(string b) {
        brand = b;
        cout << "Car created: " << brand << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car destroyed: " << brand << endl;
    }
};

int main() {
    Car car1("Toyota");
    Car car2("Honda");
    return 0;
}
