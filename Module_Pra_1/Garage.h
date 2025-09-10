#ifndef GARAGE_H
#define GARAGE_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"

class Garage {
private:
    std::vector<Vehicle*> vehicles;

public:
    ~Garage() {
        for (auto vehicle : vehicles) {
            delete vehicle;
        }
    }

    void addVehicle(Vehicle* vehicle) {
        vehicles.push_back(vehicle);
    }

    void removeVehicle(Vehicle* vehicle) {
        vehicles.erase(std::remove(vehicles.begin(), vehicles.end(), vehicle), vehicles.end());
    }

    void displayVehicles() const {
        for (const auto& vehicle : vehicles) {
            vehicle->displayInfo();
        }
    }
};

#endif