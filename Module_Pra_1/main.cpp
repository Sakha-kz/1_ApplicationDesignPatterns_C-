#include <iostream>
#include <memory>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Garage.h"
#include "Fleet.h"


// 4.	Напишите код для тестирования работы приложения.
//	Создайте несколько транспортных средств и добавьте их в гаражи.
//	Проверьте функциональность добавления и удаления транспортных средств и гаражей.

int main() {
    Fleet fleet;

    auto garage1 = std::make_unique<Garage>();
    auto garage2 = std::make_unique<Garage>();

    garage1->addVehicle(std::make_unique<Car>("Ford", "Mustang", 2019, 2, "Manual"));
    garage1->addVehicle(std::make_unique<Motorcycle>("Harley-Davidson", "Street 750", 2018, "Cruiser", false));
    garage2->addVehicle(std::make_unique<Car>("Toyota", "Camry", 2020, 4, "Automatic"));

    fleet.addGarage(std::move(garage1));
    fleet.addGarage(std::move(garage2));

    std::cout << "Все транспортные средства в автопарке:\n";
    for (const auto& garage : fleet.getGarages()) {
        garage->displayVehicles();
    }
    std::cout << "Удаление первого гаража...\n";
    fleet.removeGarage(0);
    std::cout << "Оставшиеся гаражи в автопарке:\n";
    for (const auto& garage : fleet.getGarages()) {
        garage->displayVehicles();
    }
    return 0;
}