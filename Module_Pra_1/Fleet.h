#include <iostream>
#include <vector>
#include <algorithm>
#include "Car.h"
#include "Motorcycle.h"
#include "Garage.h"

#ifndef FLEET_H
#define FLEET_H

class Fleet {
private:
    std::vector<Garage> garages;

public:
    void addGarage(const Garage& garage) {
        garages.push_back(garage);
    }

    void removeGarage(size_t index) {
        if (index < garages.size()) {
            garages.erase(garages.begin() + index);
        }
    }

    template<typename Predicate>
    std::vector<Vehicle*> findVehicles(Predicate pred) {
        std::vector<Vehicle*> result;
        for (auto& garage : garages) {
            for (auto& vehicle : garage.vehicles) {
                if (pred(vehicle)) {
                    result.push_back(vehicle);
                }
            }
        }
        return result;
    }

    const std::vector<Garage>& getGarages() const {
        return garages;
    }
};

#endif