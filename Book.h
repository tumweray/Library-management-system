//
// Created by mukis on 29/06/2026.
//
using namespace std;
#ifndef BOOK_H
#define BOOK_H
class Book{
public:
    int id;
    string title;
    string author;
    bool IsAvailable;
// ISBP
    Book(int id, string title, string author) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->IsAvailable = true; // check the availability of the book
    }
    void checkoutBook() { IsAvailable = false; } // book no longer available after checkout
    void returnBook() { IsAvailable = true; } // book now available after returning
};
#endif //BOOK_H