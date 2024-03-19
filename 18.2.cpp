#include <iostream>

class Animal {
public:
    virtual void makeSound() const = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    std::cout << "Dog says: ";
    dog.makeSound();

    std::cout << "Cat says: ";
    cat.makeSound();

    return 0;
}

