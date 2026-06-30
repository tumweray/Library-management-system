#include <iostream>
#include "Librarian.h"
#include "User.h"
#include "Book.h"
#include "Transaction.h"

using namespace std;

void Librarian::issueBook(Book& book, User& user) { //&- operator: ensures we are getting the book and not making new copies then deleting them at the end of the function
    if (book.IsAvailable) { // Fixed: capitalization to match Book class
        book.checkoutBook();
        user.borrowedBookId = book.id;
        cout << "Success: Book '" << book.title <<"Book id: "<< book.id <<"' issued to " << user.name << "." << endl;


    } else {
        cout << "Book is not available!" << endl;
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