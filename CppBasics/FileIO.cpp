//Writing

#include <iostream>
#include <fstream>

int main() {
    // Create and open a text file
    std::ofstream outfile("example.txt");

    // Write to the file
    if (outfile.is_open()) {
        outfile << "This is a line.\n";
        outfile << "This is another line.\n";
        outfile.close(); // Close the file
    } else {
        std::cout << "Unable to open file";
    }

    return 0;
}

//Reading
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string line;
    // Open a text file
    std::ifstream infile("example.txt");

    // Read and print lines from the file
    if (infile.is_open()) {
        while (getline(infile, line)) {
            std::cout << line << std::endl;
        }
        infile.close(); // Close the file
    } else {
        std::cout << "Unable to open file";
    }

    return 0;
}