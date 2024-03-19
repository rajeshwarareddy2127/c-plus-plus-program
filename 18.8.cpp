#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& personName, int personAge)
        : name(personName), age(personAge) {}

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    char grade;

public:
    Student(const std::string& studentName, int studentAge, char studentGrade)
        : Person(studentName, studentAge), grade(studentGrade) {}

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
    }
};

int main() {
    Person person("John Doe", 25);
    Student student("Jane Smith", 20, 'A');

    std::cout << "Person Details:" << std::endl;
    person.display();

    std::cout << "\nStudent Details:" << std::endl;
    student.display();

    return 0;
}

