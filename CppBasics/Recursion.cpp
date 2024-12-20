#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) { // Base case
        return 1;
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}


//Solving problems with repetitive sub-structure (e.g., Fibonacci series, backtracking problems like permutations and combinations)
//Divide-and-conquer strategies (e.g., Merge Sort)