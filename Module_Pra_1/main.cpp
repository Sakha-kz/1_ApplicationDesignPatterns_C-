#include <iostream>
#include "Vehicle.h"
#include "Car.h"

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

    return 0;
}