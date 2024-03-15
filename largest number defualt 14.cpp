#include <iostream>


double calculateArea(double length = 1.0, double width = 1.0);
double calculatePerimeter(double length = 1.0, double width = 1.0);

int main() {
    double length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    
    double area = calculateArea(length, width);
    double perimeter = calculatePerimeter(length, width);

    
    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}

double calculateArea(double length, double width) {
    return length * width;
}


double calculatePerimeter(double length, double width) {
    return 2 * (length + width);
}

