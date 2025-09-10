#include <iostream>
#include "Vehicle.h"

int main() {
    Vehicle car("Toyota", "Camry", 2020);
    car.start();
    car.stop();
    return 0;
}