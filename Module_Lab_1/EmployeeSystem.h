#ifndef EMPLOYEE_SYSTEM_H
#define EMPLOYEE_SYSTEM_H

#include <vector>
#include <memory>
#include "Employee.h"
using namespace std;

class EmployeeSystem {
private:
    vector<unique_ptr<Employee>> employees;
public:
    void addEmployee(unique_ptr<Employee> emp) {
        employees.push_back(move(emp));
    }

    void displayAll() const {
        for (const auto& emp : employees) {
            emp->display();
        }
    }
};

#endif