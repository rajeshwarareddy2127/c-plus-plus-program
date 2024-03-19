#include <iostream>

// Abstract base class Shape
class Shape {
public:
    virtual double calculateArea() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

// Derived class Rectangle from Shape
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea() const override {
        return width * height;
    }
};

// Derived class Circle from Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return 3.14159265358979323846 * radius * radius; // pi * r^2
    }
};

int main() {
    Rectangle rectangle(5, 4);
    Circle circle(3);

    std::cout << "Area of rectangle: " << rectangle.calculateArea() << std::endl;
    std::cout << "Area of circle: " << circle.calculateArea() << std::endl;

    return 0;
}

