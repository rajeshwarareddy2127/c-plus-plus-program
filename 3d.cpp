#include <iostream>
#include <cmath>

class Vector3D {
private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0) : x(x), y(y), z(z) {}

    // Getter functions
    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }

    // Operator overloading for addition
    Vector3D operator+(const Vector3D& other) const {
        return Vector3D(x + other.x, y + other.y, z + other.z);
    }

    // Operator overloading for subtraction
    Vector3D operator-(const Vector3D& other) const {
        return Vector3D(x - other.x, y - other.y, z - other.z);
    }

    // Operator overloading for scalar multiplication
    Vector3D operator*(double scalar) const {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }

    // Cross product of two vectors
    Vector3D cross(const Vector3D& other) const {
        return Vector3D(y * other.z - z * other.y,
                        z * other.x - x * other.z,
                        x * other.y - y * other.x);
    }

    // Dot product of two vectors
    double dot(const Vector3D& other) const {
        return x * other.x + y * other.y + z * other.z;
    }

    // Function to calculate magnitude of vector
    double magnitude() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    // Function to display vector
    void display() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")";
    }
};

int main() {
    Vector3D vectors[] = {Vector3D(1, 2, 3), Vector3D(4, 5, 6), Vector3D(7, 8, 9)};

    // Addition
    std::cout << "Addition:" << std::endl;
    Vector3D sum;
    for (const auto& vec : vectors) {
        sum = sum + vec;
    }
    sum.display();
    std::cout << std::endl;

    // Subtraction
    std::cout << "Subtraction:" << std::endl;
    Vector3D result = vectors[0];
    for (int i = 1; i < 3; ++i) {
        result = result - vectors[i];
    }
    result.display();
    std::cout << std::endl;

    // Scalar multiplication
    std::cout << "Scalar Multiplication:" << std::endl;
    Vector3D scalarMult = vectors[0] * 2.5;
    scalarMult.display();
    std::cout << std::endl;

    // Cross product
    std::cout << "Cross Product:" << std::endl;
    Vector3D crossProduct = vectors[0].cross(vectors[1]);
    crossProduct.display();
    std::cout << std::endl;

    // Dot product
    std::cout << "Dot Product:" << std::endl;
    double dotProduct = vectors[0].dot(vectors[1]);
    std::cout << dotProduct << std::endl;

    return 0;
}

