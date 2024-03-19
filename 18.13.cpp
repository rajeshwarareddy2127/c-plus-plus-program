#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    char grade;

public:
    Student(const std::string& studentName, char studentGrade) : name(studentName), grade(studentGrade) {}

    void display() const {
        std::cout << "Name: " << this->name << ", Grade: " << this->grade << std::endl;
    }
};

int main() {
    std::string name;
    char grade;

    std::cout << "Enter the name of the student: ";
    std::getline(std::cin, name);

    std::cout << "Enter the grade of the student: ";
    std::cin >> grade;

    Student student(name, grade);

    student.display();

    return 0;
}

