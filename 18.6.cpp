#include <iostream>

class Bird {
public:
    virtual void fly() const {
        std::cout << "The bird is flying." << std::endl;
    }

    virtual ~Bird() {} // Virtual destructor
};

class Eagle : public Bird {
public:
    void fly() const override {
        std::cout << "The eagle is soaring high in the sky." << std::endl;
    }
};

class Sparrow : public Bird {
public:
    void fly() const override {
        std::cout << "The sparrow is flapping its wings and flying around." << std::endl;
    }
};

int main() {
    Eagle eagle;
    Sparrow sparrow;

    std::cout << "Eagle: ";
    eagle.fly();

    std::cout << "Sparrow: ";
    sparrow.fly();

    return 0;
}

