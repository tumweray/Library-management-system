#include <iostream>
#include "Librarian.h"
#include "User.h"
#include "Book.h"
#include "Transaction.h"
#include "Library.h"

using namespace std;

void Librarian::issueBook(Book& book, User& user, Library& library) {
    if (book.IsAvailable) {
        book.checkoutBook();
        user.borrowedBookId = book.id;

        // 1. Generate structural data for transaction
        int txId = library.getNextTransactionId();
        std::string dueDate = "2026-07-15"; // Static placeholder date for now

        // 2. Instantiate the transaction object
        Transaction newTx(txId, book.id, user.UserId, dueDate);

        // 3. Push transaction into the library's vector database
        library.logTransaction(newTx);

        std::cout << "Success: Book '" << book.title << "' (ID: " << book.id
                  << ") issued to " << user.name << "." << std::endl;
        newTx.displayReceipt(); // Immediate print validation
    } else {
        std::cout << "Error: Book is not available!" << std::endl;
    }
}


void Librarian::ReturnBook(Book& book, User& user) {
    if (user.borrowedBookId == book.id) {
        book.returnBook();
        user.borrowedBookId = -1;
        cout << "Book successfully returned!" << endl;
    }
}
int main() {

}