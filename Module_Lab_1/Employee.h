#ifndef Employee_H
#define Employee_H

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

    string getName() const { return name; }
    int getId() const { return id; }
    string getPost() const { return post; }

    void setName(const string& n) { name = n; }
    void setId(int i) { id = i; }
    void setPost(const string& p) { post = p; }

    virtual double money() const = 0;

    virtual void display() const {
        cout << "Имя: " << name << ", ID: " << id << ", Должность: " << post << ", Заработная плата: " << money() << "\n";
    }
};

#endif