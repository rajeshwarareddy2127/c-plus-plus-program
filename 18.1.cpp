#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double getArea() const = 0; // Pure virtual function
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() const override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double getArea() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Rectangle rect(5, 4);
    Circle circle(3);

    std::cout << "Area of rectangle: " << rect.getArea() << std::endl;
    std::cout << "Area of circle: " << circle.getArea();
    return 0;
    
}

