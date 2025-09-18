#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    int copies;
public:
    Book(const std::string& title, const std::string& author, const std::string& isbn, int copies)
        : title(title), author(author), isbn(isbn), copies(copies) {}

    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    std::string getISBN() const { return isbn; }
    int getCopies() const { return copies; }

    void addCopy(int n = 1) { copies += n; }
    bool removeCopy(int n = 1) {
        if (copies >= n) {
            copies -= n;
            return true;
        }
        return false;
    }

    void displayInfo() const {
        std::cout << "Название: " << title<< ", Автор: " << author<< ", ISBN: " << isbn<< ", Экземпляров: " << copies << std::endl;
    }
};

#endif
