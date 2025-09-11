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

    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    std::string getISBN() const {
        return isbn;
    }

    int getCopies() const {
        return copies;
    }

    void displayInfo() const {
        std::cout << "Title: " << title << "\n"
                  << "Author: " << author << "\n"
                  << "ISBN: " << isbn << "\n"
                  << "Copies: " << copies << std::endl;
    }
};

#endif
