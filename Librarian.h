#include "Book.h"
#include "User.h"
#include "Library.h"

//
// Created by mukis on 29/06/2026.
//
using namespace std;
#ifndef LIBRARIAN_H
#define LIBRARIAN_H
class Librarian {
private:
    int LibrarianId;
    string LibrarianName;
public:
    void issueBook(Book& book, User& user, Library& library);
    void ReturnBook(Book& book, User& user);
    Librarian(int Librarian, string LibrarianName ) {
        this->LibrarianId = Librarian;
        this->LibrarianName = LibrarianName;
    };
};
#endif //LIBRARIAN_H