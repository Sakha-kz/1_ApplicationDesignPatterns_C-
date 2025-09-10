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
    Vehicle() : brand("Unknown"), model("Unknown"), year(0) {}

    virtual void start() const {
        std::cout << "Двигатель " << brand << " " << model << " запущен." << std::endl;
    }

    virtual void stop() const {
        std::cout << "Двигатель " << brand << " " << model << " остановлен." << std::endl;
    }

    std::string getBrand() const { return brand; }
    std::string getModel() const { return model; }
    int getYear() const { return year; }

    void setBrand(const std::string& b) { brand = b; }
    void setModel(const std::string& m) { model = m; }
    void setYear(int y) { year = y; }

    virtual void displayInfo() const {
        std::cout << "Марка: " << brand << ", Модель: " << model << ", Год: " << year << std::endl;
    }

    virtual ~Vehicle() = default;
};

#endif