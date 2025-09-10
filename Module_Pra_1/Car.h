#ifndef Car_H
#define Car_H

#include <iostream>
#include <string>
#include "Vehicle.h"

class Car : public Vehicle {
private:
    int doorCount;
    std::string transmissionType;

public:
    Car() : doorCount(4), transmissionType("Механическая") {}
    Car(const std::string& brand, const std::string& model, int year, int doors, const std::string& transmission)
        : Vehicle(brand, model, year), doorCount(doors), transmissionType(transmission) {}

    int getDoorCount() const {
        return doorCount;
    }

    void setDoorCount(int doors) {
        doorCount = doors;
    }

    std::string getTransmissionType() const {
        return transmissionType;
    }

    void setTransmissionType(const std::string& transmission) {
        transmissionType = transmission;
    }


    void displayInfo() const override {
        Vehicle::displayInfo();
        std::cout << "Дверей: " << doorCount << std::endl;
        std::cout << "Коробка передач: " << transmissionType << std::endl;
    }
};

#endif