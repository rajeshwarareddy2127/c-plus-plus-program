#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getPerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    Rectangle* rectPtr = new Rectangle(length, width);
    double perimeter = rectPtr->getPerimeter();

    std::cout << "Perimeter of the rectangle with length " << length << " and width " << width;
    return 0;
}

