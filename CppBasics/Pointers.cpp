#include <iostream>

int main() {
    int var = 20;   // Actual variable declaration
    int *ptr;       // Pointer variable

    ptr = &var;     // Store address of var in pointer variable

    // Print the value and address of var, and the value stored in the pointer
    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Value stored in ptr: " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl; // Dereferencing pointer

    return 0;
}

//Dynamic memory allocation
//Manipulating memory


//Shared pointers

#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> sp1 = make_shared<int>(10);
    shared_ptr<int> sp2 = sp1;

    cout << "Shared Value: " << *sp1 << endl;
    cout << "Reference Count: " << sp1.use_count() << endl;

    return 0;
}


//Unique Pointers
#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> up = make_unique<int>(20);
    cout << "Unique Value: " << *up << endl;

    return 0;
}
