#include <iostream>

class Complex; 

class Matrix {
public:
    Matrix(int r, int c) : rows(r), cols(c) {}
    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    
    Complex& multiplyComplex(const Complex& complexNum, double constant);

private:
    int rows;
    int cols;
    double data[100][100]; 
};

class Complex {
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    friend class Matrix;

private:
    double real;
    double imag;
};

Complex& Matrix::multiplyComplex(const Complex& complexNum, double constant) {
    Complex result;

    result.real = complexNum.real * constant;
    result.imag = complexNum.imag * constant;

    
    return result;
}

int main() {
       Matrix mat(1, 1);
    Complex complexNum(2.0, 3.0); 
    double constant = 2.5;

    std::cout << "Original Complex Number: " << complexNum.real << " + " << complexNum.imag << "i" << std::endl;

    Complex& result = mat.multiplyComplex(complexNum, constant); 
    std::cout << "Result after multiplication: " << result.real << " + " << result.imag << "i" << std::endl;

    return 0;
}

