#include <iostream>

class Matrix {
private:
    int rows;
    int cols;
    int **data;

public:
    
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = other.data[i][j];
            }
        }
    }

    Matrix& operator=(const Matrix& other) {
        if (this != &other) {
            for (int i = 0; i < rows; ++i) {
                delete[] data[i];
            }
            delete[] data;

            rows = other.rows;
            cols = other.cols;
            data = new int*[rows];
            for (int i = 0; i < rows; ++i) {
                data[i] = new int[cols];
                for (int j = 0; j < cols; ++j) {
                    data[i][j] = other.data[i][j];
                }
            }
        }
        return *this;
    }

    Matrix operator+(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator-(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) const {
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    void fillMatrix() {
        std::cout << "Enter matrix elements:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
                std::cin >> data[i][j];
            }
        }
    }

    void displayMatrix() const {
        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int rows, cols;
    std::cout << "Enter number of rows for matrix 1: ";
    std::cin >> rows;
    std::cout << "Enter number of columns for matrix 1: ";
    std::cin >> cols;
    Matrix matrix1(rows, cols);
    matrix1.fillMatrix();

    std::cout << "Enter number of rows for matrix 2: ";
    std::cin >> rows;
    std::cout << "Enter number of columns for matrix 2: ";
    std::cin >> cols;
    Matrix matrix2(rows, cols);
    matrix2.fillMatrix();
    Matrix sum = matrix1 + matrix2;
    Matrix difference = matrix1 - matrix2;
    Matrix product = matrix1 * matrix2;

    std::cout << "Sum:" << std::endl;
    sum.displayMatrix();
    std::cout << "Difference:" << std::endl;
    difference.displayMatrix();
    std::cout << "Product:" << std::endl;
    product.displayMatrix();

    return 0;
}

