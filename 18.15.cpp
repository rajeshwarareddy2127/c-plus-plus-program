#include <iostream>
#include <string>


class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& personName, int personAge)
        : name(personName), age(personAge) {}

    virtual void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Student : public Person {
public:
    Student(const std::string& studentName, int studentAge)
        : Person(studentName, studentAge) {}


    void display() const override {
        std::cout << "Student: ";
        Person::display();
    }
};

int main() {

    Student student("John Doe", 20);

    Person* personPtr = &student;

    
    personPtr->display(); 

    return 0;
}

