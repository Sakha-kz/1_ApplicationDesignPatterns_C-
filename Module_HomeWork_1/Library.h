#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include <string>
#include "Book.h"
#include "Reader.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Reader> readers;
public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void removeBook(const std::string& isbn) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->getISBN() == isbn) {
                books.erase(it);
                std::cout << "Книга удалена: " << isbn << std::endl;
                return;
            }
        }
        std::cout << "Книга с ISBN " << isbn << " не найдена." << std::endl;
    }

    void registerReader(const Reader& reader) {
        readers.push_back(reader);
    }

    void removeReader(int readerID) {
        for (auto it = readers.begin(); it != readers.end(); ++it) {
            if (it->getReaderID() == readerID) {
                readers.erase(it);
                std::cout << "Читатель удален: " << readerID << std::endl;
                return;
            }
        }
        std::cout << "Читатель с ID " << readerID << " не найден." << std::endl;
    }

    bool issueBook(const std::string& isbn) {
        for (auto& book : books) {
            if (book.getISBN() == isbn) {
                if (book.getCopies() > 0) {
                    book.removeCopy();
                    std::cout << "Книга выдана: " << book.getTitle() << std::endl;
                    return true;
                } else {
                    std::cout << "Нет доступных экземпляров книги." << std::endl;
                    return false;
                }
            }
        }
        std::cout << "Книга с ISBN " << isbn << " не найдена." << std::endl;
        return false;
    }

    void returnBook(const std::string& isbn) {
        for (auto& book : books) {
            if (book.getISBN() == isbn) {
                book.addCopy();
                std::cout << "Книга возвращена: " << book.getTitle() << std::endl;
                return;
            }
        }
        std::cout << "Книга с ISBN " << isbn << " не найдена." << std::endl;
    }

    void displayBooks() const {
        std::cout << "\nСписок книг в библиотеке:\n";
        for (const auto& book : books) {
            book.displayInfo();
        }
    }

    void displayReaders() const {
        std::cout << "\nСписок читателей:\n";
        for (const auto& reader : readers) {
            reader.displayInfo();
        }
    }
};

#endif
