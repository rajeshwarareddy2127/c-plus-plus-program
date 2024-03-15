#include <iostream>
#include <vector>

class Employee {
private:
    int id;
    std::string name;
    double salary;
    static double totalSalary;

public:
    // Constructor
    Employee(int id, const std::string& name, double salary) : id(id), name(name), salary(salary) {
        totalSalary += salary;
    }

    // Static member function to get total salary of all employees
    static double getTotalSalary() {
        return totalSalary;
    }

    // Destructor
    ~Employee() {
        totalSalary -= salary;
    }

    // Getter functions
    int getId() const { return id; }
    std::string getName() const { return name; }
    double getSalary() const { return salary; }

    // Setter functions
    void setId(int newId) { id = newId; }
    void setName(const std::string& newName) { name = newName; }
    void setSalary(double newSalary) {
        totalSalary -= salary;
        salary = newSalary;
        totalSalary += salary;
    }
};

// Initialize static member variable
double Employee::totalSalary = 0.0;

int main() {
    // Create employees
    Employee emp1(1, "John", 50000);
    Employee emp2(2, "Alice", 60000);

    // Display employee details
    std::cout << "Employee 1 Details:" << std::endl;
    std::cout << "ID: " << emp1.getId() << std::endl;
    std::cout << "Name: " << emp1.getName() << std::endl;
    std::cout << "Salary: " << emp1.getSalary() << std::endl;

    std::cout << "Employee 2 Details:" << std::endl;
    std::cout << "ID: " << emp2.getId() << std::endl;
    std::cout << "Name: " << emp2.getName() << std::endl;
    std::cout << "Salary: " << emp2.getSalary() << std::endl;

    // Update salary of an employee
    emp1.setSalary(55000);

    // Display updated total salary of all employees
    std::cout << "Total Salary of all Employees: " << Employee::getTotalSalary() << std::endl;

    return 0;
}

