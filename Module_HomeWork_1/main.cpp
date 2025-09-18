#include <iostream>
#include "Book.h"
#include "Reader.h"
#include "Library.h"

int main() {
    Library lib;


    lib.addBook(Book("1984", "Джордж Оруэлл", "1234567890", 3));
    lib.addBook(Book("Мастер и Маргарита", "М. Булгаков", "9876543210", 2));
    lib.displayBooks();


    lib.registerReader(Reader("Серик", 1));
    lib.registerReader(Reader("Айгуль", 2));
    lib.displayReaders();


    lib.issueBook("1234567890");
    lib.issueBook("1234567890");
    lib.issueBook("1234567890"); 
    lib.issueBook("1234567890"); 



    lib.returnBook("1234567890");


    lib.removeBook("9876543210");
    lib.displayBooks();


    lib.removeReader(1);
    lib.displayReaders();

    return 0;
}
