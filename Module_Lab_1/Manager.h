#ifndef Manager_H
#define Manager_H

#include "Employee.h"
using namespace std;

class Manager : public Employee {
private:
    double fixedMoney;
    double bonus;
public:
    Manager(const string& n, int i, const string& r, double fixedMoney, double bonus)
        : Employee(n, i, r), fixedMoney(fixedMoney), bonus(bonus) {}

    double getFixedMoney() const { return fixedMoney; }
    void setFixedMoney(double fixedMoney) { this->fixedMoney = fixedMoney; }

    double getBonus() const { return bonus; }
    void setBonus(double bonus) { this->bonus = bonus; }

    double money() const override {
        return this->fixedMoney + this->bonus;
    }
};

#endif