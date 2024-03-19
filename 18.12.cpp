#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double salary;

public:
    Employee(const std::string& empName, double empSalary) : name(empName), salary(empSalary) {}

    void display() const {
        std::cout << "Name: " << name << ", Salary: $" << salary << std::endl;
    }
};

int main() {
    std::string name;
    double salary;

    std::cout << "Enter the name of the employee: ";
    std::getline(std::cin, name);

    std::cout << "Enter the salary of the employee: ";
    std::cin >> salary;

    Employee* empPtr = new Employee(name, salary);

    empPtr->display();

    delete empPtr; 

    return 0;
}

