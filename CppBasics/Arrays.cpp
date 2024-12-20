#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Accessing elements
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    // Modify elements
    arr[2] = 10;
    cout << "Modified Element 2: " << arr[2] << endl;

    return 0;
}
