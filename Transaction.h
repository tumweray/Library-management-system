//
// Created by mukis on 29/06/2026.
//
using namespace std;

#ifndef TRANSACTION_H
#define TRANSACTION_H
class Transaction {
private:
    int TransactionId;
    int BookId;
    int UserId;
    string DueDate;
public:
    void displayReceipt() {
        cout << "Receipt - TxID: " << TransactionId << ", BookID: " << BookId << ", UserID: " << UserId << ", Due: " << DueDate << endl;

    };//Prints a formatted confirmation receipt to the console window.
    Transaction( int TransactionId, int BookId, int UserId, string DueDate) {
        this->TransactionId = TransactionId;
        this->BookId = BookId;
        this->UserId = UserId;
        this->DueDate = DueDate;
    };

};
#endif //TRANSACTION_H