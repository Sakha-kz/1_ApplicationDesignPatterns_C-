#ifndef GARAGE_H
#define GARAGE_H

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"

class Garage {
private:
    std::vector<std::unique_ptr<Vehicle>> vehicles;

public:
    ~Garage() = default;

    void addVehicle(std::unique_ptr<Vehicle> vehicle) {
    vehicles.push_back(std::move(vehicle));
}

    void removeVehicle(Vehicle* vehicle) {
        vehicles.erase(std::remove_if(vehicles.begin(), vehicles.end(),
            [vehicle](const std::unique_ptr<Vehicle>& v) { return v.get() == vehicle; }), vehicles.end());
    }

    void displayVehicles() const {
        for (const auto& vehicle : vehicles) {
            vehicle->displayInfo();
        }
    }
};

#endif