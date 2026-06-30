cmake_minimum_required(VERSION 4.0)
project(Library_Management_System)

set(CMAKE_CXX_STANDARD 26)

add_executable(Library_Management_System
        main.cpp
        Transaction.h
        Book.h
        Librarian.h
        User.h
        Library.h
)
