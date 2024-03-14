#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>

double calculateAverage(const std::vector<double>& data) {
    double sum = 0.0;
    for (double num : data.size()) {
        sum += num;
    }
    return sum / data.size();
}

int main() {
    std::string filename;
    std::cout << "Enter the name of the file: ";
    std::cin >> filename;

    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1; // Exit with error code
    }

    std::vector<double> data;
    double number;
    while (inputFile >> number) {
        data.push_back(number);
    }

    if (inputFile.bad()) {
        std::cerr << "Error: I/O error occurred while reading the file." << std::endl;
        return 1; // Exit with error code
    }
    else if (inputFile.fail()) {
        std::cerr << "Error: Invalid data encountered in the file." << std::endl;
        return 1; // Exit with error code
    }

    try {
        double average = calculateAverage(data);
        std::cout << "Average: " << average << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1; // Exit with error code
    }

    return 0;
}

