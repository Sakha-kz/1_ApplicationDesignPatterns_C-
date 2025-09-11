#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include "Car.h"
#include "Motorcycle.h"
#include "Garage.h"

#ifndef FLEET_H
#define FLEET_H

class Fleet {
private:
    std::vector<std::unique_ptr<Garage>> garages;

public:
    void addGarage(std::unique_ptr<Garage> garage) {
        garages.push_back(std::move(garage));
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
            for (auto& vehicle : garage->vehicles) {
                if (pred(vehicle)) {
                    result.push_back(vehicle.get());
                }
            }
        }
        return result;
    }

    const std::vector<std::unique_ptr<Garage>>& getGarages() const {
        return garages;
    }
};

#endif