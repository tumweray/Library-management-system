// Library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "User.h"
#include "Transaction.h"

class Library {
private:
    std::vector<Book> books;         // Storage for all books
    std::vector<User> users;         // Storage for all registered users
    std::vector<Transaction> txs;    // Storage for all transaction logs

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void registerUser(const User& user) {
        users.push_back(user);
    }

    // Helper functions to find items in your vectors
    Book* findBookById(int id) {
        for (auto& book : books) {
            if (book.id == id)
                return &book;
        }
        return nullptr; // Not found
    }
};
#endif
