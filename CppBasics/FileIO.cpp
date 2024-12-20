//Writing

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile("example.txt");
    if (outfile.is_open()) {
        outfile << "Hello, World!\n";
        outfile << "This is a file handling example.\n";
        outfile.close();
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    return 0;
}


//Reading
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream infile("example.txt");
    string line;
    if (infile.is_open()) {
        while (getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}
