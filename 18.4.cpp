#include <iostream>

class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square." << std::endl;
    }
};

class Triangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a triangle." << std::endl;
    }
};

int main() {
    Circle circle;
    Square square;
    Triangle triangle;

    std::cout << "Drawing shapes:" << std::endl;
    circle.draw();
    square.draw();
    triangle.draw();

    return 0;
}

