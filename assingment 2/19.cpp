#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // Open a file for writing
    std::ofstream outputFile("output.txt");

    if (outputFile.is_open())
    {
        // File opened successfully
        outputFile << "Hello, World!" << std::endl;
        outputFile.close(); // Close the file
    }
    else
    {
        std::cerr << "Failed to open the file for writing." << std::endl;
    }

    return 0;
}
