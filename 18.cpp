#include <iostream>


void swap(int &a, int &b);


void swap(int arr1[], int arr2[], int size);

void displayArray(const int arr[], int size);

int main() {
    int x = 5, y = 10;
    std::cout << "Before swapping integers: " << x << " " << y << std::endl;
    swap(x, y);
    std::cout << "After swapping integers: " << x << " " << y << std::endl;

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    std::cout << "\nBefore swapping arrays:\n";
    std::cout << "Array 1: ";
    displayArray(arr1, size);
    std::cout << "Array 2: ";
    displayArray(arr2, size);

    swap(arr1, arr2, size);

    std::cout << "\nAfter swapping arrays:\n";
    std::cout << "Array 1: ";
    displayArray(arr1, size);
    std::cout << "Array 2: ";
    displayArray(arr2, size);

    return 0;
}
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void swap(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; ++i) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

