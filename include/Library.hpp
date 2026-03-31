#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include "Author.hpp"
#include "Book.hpp"
#include "Loan.hpp"
#include "User.hpp"
using namespace std;

class LIBRARY{
    private:
        vector<BOOK> books;
        vector<AUTHOR> authors;
        vector<LOAN> loans;
        vector<USER> users;
    public:
        // Author features
        void addAuthor(const AUTHOR& author);
        void removeAuthor(const int& id);
        void printAuthor(const int& id);
        void updateAuthor(); // coming soon
        void listAllAuthor(); // coming soon
        void printAuthorBooks(const int& id);
        
        // Book features
        void addBook(const BOOK& book);
        void removeBook(const int& id);
        void updateBook(); // coming soon
        void printBook(const int& id);
        void listAllBooks(); // coming soon

        // user features
        void addUser(const USER& user);

        //loan features
        void borrowBook(int user_id, int book_id, string date);
        void returnBook(int user_id, int book_id, string date);
};

#endif