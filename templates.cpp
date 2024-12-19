
// C++ Topics and Template Code Documentation

// ==================================
// Topic 1: Input and Output
// ==================================
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <thread>
#include <mutex>
#include <fstream>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

void inputOutputExamples() {
    // Basic Input and Output
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "You entered: " << a << endl;

    // String Input and Output
    string name;
    cout << "Enter your name: ";
    cin.ignore(); // To handle newline character
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    // Input and Output for Arrays
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// ==================================
// Topic 2: Loops and Iterations
// ==================================
void loopsExamples() {
    // For Loop
    for (int i = 0; i < 5; i++) {
        cout << "For Loop iteration: " << i << endl;
    }

    // While Loop
    int i = 0;
    while (i < 5) {
        cout << "While Loop iteration: " << i << endl;
        i++;
    }

    // Do-While Loop
    i = 0;
    do {
        cout << "Do-While Loop iteration: " << i << endl;
        i++;
    } while (i < 5);

    // Range-based For Loop
    vector<int> nums = {1, 2, 3, 4, 5};
    for (int num : nums) {
        cout << "Range-based loop value: " << num << endl;
    }
}

// ==================================
// Topic 3: Functions and Templates
// ==================================
// Function Example
int add(int a, int b) {
    return a + b;
}

// Template Function Example
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

void functionsExamples() {
    cout << "Addition: " << add(5, 10) << endl;
    cout << "Multiplication (template): " << multiply(3.5, 2.0) << endl;
}

// ==================================
// Topic 4: Classes and Objects
// ==================================
class Rectangle {
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int area() {
        return width * height;
    }
};

void classesExamples() {
    Rectangle rect(10, 20);
    cout << "Area of Rectangle: " << rect.area() << endl;
}

// ==================================
// Topic 5: STL (Standard Template Library)
// ==================================
void stlExamples() {
    // Vector Example
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    cout << "Vector elements: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // Map Example
    map<string, int> m;
    m["Alice"] = 30;
    m["Bob"] = 25;
    cout << "Map elements: \n";
    for (auto &pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Set Example
    set<int> s = {1, 2, 3, 3};
    cout << "Set elements: ";
    for (int num : s) {
        cout << num << " ";
    }
    cout << endl;

    // Priority Queue Example
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    cout << "Priority Queue elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // Stack Example
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Stack elements: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    // Queue Example
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

// ==================================
// Topic 6: Pointers
// ==================================
void pointersExamples() {
    int a = 10;
    int *p = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p value: " << p << endl;
    cout << "Value pointed by p: " << *p << endl;

    // Dynamic Memory Allocation
    int *dynamicInt = new int(20);
    cout << "Dynamically allocated int: " << *dynamicInt << endl;
    delete dynamicInt; // Free memory
}

// ==================================
// Topic 7: File Handling
// ==================================
void fileHandlingExamples() {
    // Writing to a file
    ofstream outFile("example.txt");
    outFile << "Hello, File!\n";
    outFile.close();

    // Reading from a file
    ifstream inFile("example.txt");
    string content;
    while (getline(inFile, content)) {
        cout << content << endl;
    }
    inFile.close();
}

// ==================================
// Topic 8: Multi-threading
// ==================================
mutex mtx;
void printThread(int id) {
    lock_guard<mutex> guard(mtx);
    cout << "Thread ID: " << id << "\n";
}

void multiThreadingExamples() {
    thread t1(printThread, 1);
    thread t2(printThread, 2);

    t1.join();
    t2.join();
}

// ==================================
// Topic 9: Algorithms (Sorting and Searching)
// ==================================
void algorithmsExamples() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};

    // Sorting
    sort(arr.begin(), arr.end());
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Binary Search
    if (binary_search(arr.begin(), arr.end(), 5)) {
        cout << "Element 5 found in the array." << endl;
    } else {
        cout << "Element 5 not found in the array." << endl;
    }
}

// ==================================
// Main Function
// ==================================
int main() {
    cout << "--- Input and Output Examples ---\n";
    inputOutputExamples();

    cout << "\n--- Loops Examples ---\n";
    loopsExamples();

    cout << "\n--- Functions Examples ---\n";
    functionsExamples();

    cout << "\n--- Classes Examples ---\n";
    classesExamples();

    cout << "\n--- STL Examples ---\n";
    stlExamples();

    cout << "\n--- Pointers Examples ---\n";
    pointersExamples();

    cout << "\n--- File Handling Examples ---\n";
    fileHandlingExamples();

    cout << "\n--- Multi-threading Examples ---\n";
    multiThreadingExamples();

    cout << "\n--- Algorithms Examples ---\n";
    algorithmsExamples();

    return 0;
}
