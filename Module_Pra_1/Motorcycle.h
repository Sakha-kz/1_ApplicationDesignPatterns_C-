#ifndef Motorcycle_H
#define Motorcycle_H

#include <iostream>
#include <string>
#include "Vehicle.h"

class Motorcycle : public Vehicle {
private:
    std::string bodyType;
    bool hasSideBox;

public:
    Motorcycle(const std::string& brand, const std::string& model, int year,
               const std::string& bodyType, bool hasSideBox)
        : Vehicle(brand, model, year), bodyType(bodyType), hasSideBox(hasSideBox) {}

    void displayInfo() const {
        std::cout << "Мотоцикл: " << getBrand() << " " << getModel() << " (" << getYear() << ")\n";
        std::cout << "Тип кузова: " << bodyType << "\n";
        std::cout << "Наличие бокса: " << (hasSideBox ? "Да" : "Нет") << "\n";
    }
};

#endif