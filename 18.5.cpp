#include <iostream>

class Vehicle {
protected:
    double speed;
    double fuel;

public:
    Vehicle(double initialSpeed, double initialFuel)
        : speed(initialSpeed), fuel(initialFuel) {}

    void display() const {
        std::cout << "Speed: " << speed << " km/h, Fuel: " << fuel << " liters" << std::endl;
    }
};

class Car : public Vehicle {
public:
    Car(double initialSpeed, double initialFuel)
        : Vehicle(initialSpeed, initialFuel) {}
};

class Bike : public Vehicle {
public:
    Bike(double initialSpeed, double initialFuel)
        : Vehicle(initialSpeed, initialFuel) {}
};

int main() {
    Car car(100, 30);
    Bike bike(60, 10);

    std::cout << "Car Details:" << std::endl;
    car.display();

    std::cout << "\nBike Details:" << std::endl;
    bike.display();

    return 0;
}

