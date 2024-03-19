#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    double salary;

public:
    Employee(const std::string& empName, double empSalary)
        : name(empName), salary(empSalary) {}

    void display() const {
        std::cout << "Name: " << name << ", Salary: $" << salary << std::endl;
    }
};

class Manager : public Employee {
private:
    std::string department;

public:
    Manager(const std::string& empName, double empSalary, const std::string& dept)
        : Employee(empName, empSalary), department(dept) {}

    void display() const {
        std::cout << "Name: " << name << ", Salary: $" << salary << ", Department: " << department << std::endl;
    }
};

class Worker : public Employee {
public:
    Worker(const std::string& empName, double empSalary)
        : Employee(empName, empSalary) {}
};

int main() {
    Manager manager("John Doe", 50000, "Sales");
    Worker worker("Jane Smith", 30000);

    std::cout << "Manager: ";
    manager.display();

    std::cout << "Worker: ";
    worker.display();

    return 0;
}

