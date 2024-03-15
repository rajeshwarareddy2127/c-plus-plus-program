#include <iostream>
#include <cstdlib> 

int main() {
    int* array;
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    array = new (std::nothrow) int[size]; 
    if (array == '\0') {
        std::cerr << "Error: Memory allocation failed!" << std::endl;
        std::exit(1); 
    }
    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    delete[] array;

    return 0;
}

