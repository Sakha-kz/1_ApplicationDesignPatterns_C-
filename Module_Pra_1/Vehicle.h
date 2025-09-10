#ifndef VEHICLE_H
#define VEHICLE_H
    
#include <iostream>
#include <string>

class Vehicle {
private:
    std::string brand;
    std::string model;
    int year;

public:
    Vehicle(const std::string& brand, const std::string& model, int year)
        : brand(brand), model(model), year(year) {}

    void start() const {
        std::cout << "Двигатель " << brand << " " << model << " запущен." << std::endl;
    }

    void stop() const {
        std::cout << "Двигатель " << brand << " " << model << " остановлен." << std::endl;
    }
};

#endif