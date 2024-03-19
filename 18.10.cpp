#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() const {
        return 3.14159265358979323846 * radius * radius; 
    }
};

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    Circle* circlePtr = new Circle(radius); 
    double area = circlePtr->getArea();

    std::cout << "Area of the circle with radius " << radius << " is: " << area << std::endl;

    delete circlePtr; 

    return 0;
}

