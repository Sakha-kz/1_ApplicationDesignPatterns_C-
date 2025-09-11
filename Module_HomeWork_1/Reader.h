//o	Читатель (Reader): Атрибуты – имя, идентификатор читателя.

#ifndef Reader_H
#define Reader_H

#include <iostream>
#include <string>

class Reader {
private:
    std::string name;
    int readerID;
public:
    Reader(const std::string& name, int readerID)
        : name(name), readerID(readerID) {}

    std::string getName() const {
        return name;
    }

    int getReaderID() const {
        return readerID;
    }

    void displayInfo() const {
        std::cout << "Имя Читателя: " << name << "\n"
                  << "ID Читателя: " << readerID << std::endl;
    }
};

#endif 