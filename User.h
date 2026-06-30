//
// Created by mukis on 29/06/2026.
//
using namespace std;
#ifndef USER_H
#define USER_H
class User  {
public:
    int UserId;
    string name;
    int borrowedBookId;

    User(int UserId, string name) {
        this->UserId = UserId;
        this->name = name;
        this->borrowedBookId = -1; // -1 means no book borrowed
    }
};
#endif //USER_H