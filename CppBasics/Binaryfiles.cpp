//writing
#include <iostream>
#include <fstream>

struct Data {
    int id;
    char name[20];
};

int main() {
    // Create and open a binary file
    std::ofstream outfile("data.bin", std::ios::binary);

    Data data = {1, "Alice"};

    // Write data to the file
    if (outfile.is_open()) {
        outfile.write(reinterpret_cast<char*>(&data), sizeof(Data));
        outfile.close();
    } else {
        std::cout << "Unable to open file";
    }

    return 0;
}

//Reading

#include <iostream>
#include <fstream>

struct Data {
    int id;
    char name[20];
};

int main() {
    // Create and open a binary file
    std::ofstream outfile("data.bin", std::ios::binary);

    Data data = {1, "Alice"};

    // Write data to the file
    if (outfile.is_open()) {
        outfile.write(reinterpret_cast<char*>(&data), sizeof(Data));
        outfile.close();
    } else {
        std::cout << "Unable to open file";
    }

    return 0;
}