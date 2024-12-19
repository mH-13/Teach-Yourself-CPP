#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec; // Create a vector of integers

    // Add elements to the vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // Access elements of the vector
    for (int i = 0; i < vec.size(); i++) {
        std::cout << "Element at index " << i << ": " << vec[i] << std::endl;
    }

    // Remove the last element
    vec.pop_back();

    std::cout << "Size of vector after pop_back: " << vec.size() << std::endl;

    return 0;
}