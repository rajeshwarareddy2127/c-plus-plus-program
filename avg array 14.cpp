#include <iostream>

// Function prototype for the template function
template<typename T>
T average(const T array[], int size);

int main() {
    // Test with integers
    int intArray[] = {1, 2, 3, 4, 5};
    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Average of integers: " << average(intArray, intArraySize) << std::endl;

    // Test with doubles
    double doubleArray[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    std::cout << "Average of doubles: " << average(doubleArray, doubleArraySize) << std::endl;

    // Test with floats
    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    int floatArraySize = sizeof(floatArray) / sizeof(floatArray[0]);
    std::cout << "Average of floats: " << average(floatArray, floatArraySize) << std::endl;

    return 0;
}

// Template function definition to calculate the average of elements in an array
template<typename T>
T average(const T array[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}

