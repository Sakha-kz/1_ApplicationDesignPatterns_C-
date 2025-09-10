#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Garage.h"

int main() {
    Vehicle myCar("Toyota", "Camry", 2020);
    myCar.start();
    myCar.stop();
    std::cout << "Марка: " << myCar.getBrand() << ", Модель: " << myCar.getModel() << ", Год: " << myCar.getYear() << std::endl;

    Car mySedan("Honda", "Accord", 2021, 4, "Automatic");
    mySedan.start();
    mySedan.stop();
    std::cout << "Марка: " << mySedan.getBrand() << ", Модель: " << mySedan.getModel() << ", Год: " << mySedan.getYear() << std::endl;
    std::cout << "Количество дверей: " << mySedan.getDoorCount() << ", Тип трансмиссии: " << mySedan.getTransmissionType() << std::endl;

    Motorcycle myMotorcycle("Yamaha", "MT-07", 2022, "Naked", true);
    myMotorcycle.start();
    myMotorcycle.stop();
    myMotorcycle.displayInfo();

    Garage myGarage;
    myGarage.addVehicle(new Car("Ford", "Mustang", 2019, 2, "Manual"));
    myGarage.addVehicle(new Motorcycle("Harley-Davidson", "Street 750", 2018, "Cruiser", false));
    std::cout << "\nТранспортные средства в гараже:\n";
    myGarage.displayVehicles();

    return 0;
}