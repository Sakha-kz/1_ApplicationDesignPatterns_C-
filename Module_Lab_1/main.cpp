#include <iostream>
#include <iomanip>
#include "Employee.h"
#include "Worker.h"

using namespace std;

int main() {
    Worker w("Серик", 1, "Инженер", 50.0, 160);
    w.display();

    Employee* e = new Worker("Берик", 2, "Программист", 50.5, 160);
    e->display();
    delete e;

    cout << fixed << setprecision(2);
    return 0;
}