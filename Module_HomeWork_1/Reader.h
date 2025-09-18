#ifndef READER_H
#define READER_H

#include <iostream>
#include <string>

class Reader {
private:
    std::string name;
    int readerID;
public:
    Reader(const std::string& name, int readerID)
        : name(name), readerID(readerID) {}

    std::string getName() const { return name; }
    int getReaderID() const { return readerID; }

    void displayInfo() const {
        std::cout << "Читатель: " << name
                  << ", ID: " << readerID << std::endl;
    }
};

#endif
