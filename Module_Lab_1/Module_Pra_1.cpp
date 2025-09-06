#include <iostream>
#include "Module_Pra_1.h"

using namespace std;

int main() {
    Employee emp1("Ана", 1, "Junior");
    Employee emp2("Берик", 2, "Mid");
    Employee emp3("Серик", 3, "Senior");

    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}