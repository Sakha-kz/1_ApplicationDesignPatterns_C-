#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    int rang;
public:
    Employee(string n, int i, int r) : name(n), id(i), rang(r) {}

    int money() const {
        return rang * 1000;
    }

    void display() const {
        cout<< "Name: "<<name<<", ID: "<<id<<", Rang: "<<rang<<", Money: "<<money()<< endl;
    }
};