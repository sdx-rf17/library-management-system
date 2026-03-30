#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include "Author.hpp"
#include "Book.hpp"
using namespace std;

class LIBRARY{
    private:
        vector<BOOK> books;
        vector<AUTHOR> authors;
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
};

#endif