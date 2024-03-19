#include <iostream>

class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Shape* shapePtr; 

    Circle circle; 
    shapePtr = &circle; 

    shapePtr->draw(); 

    return 0;
}

