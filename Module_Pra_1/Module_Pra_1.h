#ifndef MODULE_PRA_1_H
#define MODULE_PRA_1_H

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int id;
    string post;
public:
    Employee(string n, int i, string r) : name(n), id(i), post(r) {}

    int money() const {
        if (post == "Junior") return 1000;
        else if (post == "Mid") return 2000;
        else if (post == "Senior") return 3000;
        return 0;
    }

    void display() const {
        cout<< "Имя: "<<name<<", ID: "<<id<<", Должность: "<<post<<", Заработная плата: "<<money()<< "\n";
    }
};

#endif
