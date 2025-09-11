#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Garage.h"
#include "Fleet.h"

int main() {

    Garage garage1;
    garage1.addVehicle(new Car("Ford", "Mustang", 2019, 2, "Manual"));
    garage1.addVehicle(new Motorcycle("Harley-Davidson", "Street 750", 2018, "Cruiser", false));

    std::cout << "\nГараж №1:\n";
    garage1.displayVehicles();

    garage1.removeVehicle(0);
    std::cout << "\nПосле удаления одного ТС из гаража №1:\n";
    garage1.displayVehicles();

    Garage garage2;
    garage2.addVehicle(new Car("Toyota", "Camry", 2020, 4, "Automatic"));

    std::cout << "\nГараж №2:\n";
    garage2.displayVehicles();

    Fleet fleet;
    fleet.addGarage(garage1);
    fleet.addGarage(garage2);

    std::cout << "\nВсе гаражи в автопарке:\n";
    for (const auto& g : fleet.getGarages()) {
        g.displayVehicles();
    }

    fleet.removeGarage(0);
    std::cout << "\nПосле удаления гаража из автопарка:\n";
    for (const auto& g : fleet.getGarages()) {
        g.displayVehicles();
    }

    return 0;
}