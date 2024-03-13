#include <iostream>

class MyClass {
public: // Without using the private keyword, members are public by default
    int value; // Declaring a public integer member variable 'value'

    // Default constructor initializing 'value' to 0
    MyClass() : value(0) {}

    // Parameterized constructor initializing 'value' with the provided 'val'
    MyClass(int val) : value(val) {}

    // Overloading the + operator to add two MyClass objects
    MyClass operator+(const MyClass& other) {
        MyClass result; // Creating a new MyClass object 'result'
        
        // Adding the 'value' of the current object with the 'value' of the 'other' object
        result.value = this->value + other.value;

        // Returning the result of the addition
        return result;
    }

    // Function to display the value of MyClass object
    void display() {
        // Displaying the value of 'value' member variable
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    // Creating MyClass objects 'obj1' and 'obj2' with values 5 and 10 respectively
    MyClass obj1(5);
    MyClass obj2(10);

    // Adding two objects using overloaded + operator and storing the result in 'result'
    MyClass result = obj1 + obj2;

    // Displaying the result of the addition
    std::cout << "Result of addition:" << std::endl;
    result.display();

    return 0; // Indicating successful completion of the program
}

