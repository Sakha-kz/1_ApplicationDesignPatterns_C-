#include <iostream>
#include <iomanip>
#include "Employee.h"
#include "Worker.h"
#include "Manager.h"
#include "EmployeeSystem.h"

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    EmployeeSystem system;

    system.addEmployee(make_unique<Worker>("Серик", 1, "Инженер", 50.0, 160));
    system.addEmployee(make_unique<Worker>("Айдар", 2, "Техник", 30.0, 200));

    system.addEmployee(make_unique<Manager>("Алия", 3, "Менеджер", 1000.0, 200.0));
    system.addEmployee(make_unique<Manager>("Жанна", 4, "Руководитель", 2000.0, 100.0));

    system.displayAll();
    return 0;
}