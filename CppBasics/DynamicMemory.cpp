#include <iostream>
using namespace std;

int main() {
    // Allocating memory
    int* ptr = new int(10);

    // Using allocated memory
    cout << "Value: " << *ptr << endl;

    // Deallocating memory
    delete ptr;

    return 0;
}


//Managing memory efficiently
//Avoiding memory leaks