#ifndef Worker_H
#define Worker_H

#include "Employee.h"
using namespace std;

class Worker : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    Worker(const string& n, int i, const string& r, double hourlyRate, int hoursWorked)
        : Employee(n, i, r), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

    double getHourlyRate() const { return hourlyRate; }
    void setHourlyRate(double rate) { hourlyRate = rate; }

    int getHoursWorked() const { return hoursWorked; }
    void setHoursWorked(int hours) { hoursWorked = hours; }

    double money() const override {
        return hourlyRate * hoursWorked;
    }
};

#endif