#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }
    T subtract(T a, T b) {
        return a - b;
    }
};

int main() {
    Calculator<int> intCalc;
    cout << "Integer Addition: " << intCalc.add(10, 5) << endl;

    Calculator<double> doubleCalc;
    cout << "Double Subtraction: " << doubleCalc.subtract(10.5, 3.2) << endl;

    return 0;
}
//Generalized programming for different data types
//Reusability and modular design