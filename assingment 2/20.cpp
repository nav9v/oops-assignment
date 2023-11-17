#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Writing to a file
    std::ofstream outputFile("output.txt");

    if (outputFile.is_open())
    {
        // File opened successfully for writing
        outputFile << "Hello, World!" << std::endl;
        outputFile << "This is a test." << std::endl;
        outputFile.close(); // Close the file
    }
    else
    {
        std::cerr << "Failed to open the file for writing." << std::endl;
        return 1;
    }

    // Reading from the same file
    std::ifstream inputFile("output.txt");

    if (inputFile.is_open())
    {
        // File opened successfully for reading
        std::string line;
        while (std::getline(inputFile, line))
        {
            std::cout << line << std::endl;
        }
        inputFile.close(); // Close the file
    }
    else
    {
        std::cerr << "Failed to open the file for reading." << std::endl;
        return 1;
    }

    return 0;
}
