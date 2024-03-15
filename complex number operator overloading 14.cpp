#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}

    double getReal() const { return real; }
    double getImag() const { return imag; }

    friend Complex operator+(const Complex& c1, const Complex& c2);
    friend Complex operator-(const Complex& c1, const Complex& c2);
    friend Complex operator*(const Complex& c1, const Complex& c2);
    friend Complex operator/(const Complex& c1, const Complex& c2);

    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}


Complex operator-(const Complex& c1, const Complex& c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}


Complex operator*(const Complex& c1, const Complex& c2) {
    double realPart = c1.real * c2.real - c1.imag * c2.imag;
    double imagPart = c1.real * c2.imag + c1.imag * c2.real;
    return Complex(realPart, imagPart);
}


Complex operator/(const Complex& c1, const Complex& c2) {
    double divisor = c2.real * c2.real + c2.imag * c2.imag;
    double realPart = (c1.real * c2.real + c1.imag * c2.imag) / divisor;
    double imagPart = (c1.imag * c2.real - c1.real * c2.imag) / divisor;
    return Complex(realPart, imagPart);
}

std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}

int main() {
    Complex a(3, 4);
    Complex b(1, 2);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    Complex sum = a + b;
    Complex diff = a - b;
    Complex product = a * b;
    Complex quotient = a / b;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}

