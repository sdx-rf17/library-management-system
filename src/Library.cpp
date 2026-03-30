#include  "include/Library.hpp"
#include <iostream>
#include <algorithm>
using namespace std;

void LIBRARY::addAuthor(const AUTHOR& author) {
    authors.push_back(author);
}

void LIBRARY::removeAuthor(const int& id){
    auto it = find_if(authors.begin(), authors.end(),
        [&](const AUTHOR& a){
            return a.getId() == id;
        });

    if (it != authors.end()) {
        authors.erase(it);
    }
}

void LIBRARY::addBook(const BOOK& book) {
    books.push_back(book);
}

void LIBRARY::printAuthor(const int& id){
    for (auto &a : authors){
        if (a.getId() == id){
            cout << "Author ID: " << a.getId() << "\n";
            cout << "Name: " << a.getName() << "\n";
            cout << "Phone: " << a.getPhone() << "\n";
            cout << "Email: " << a.getEmail() << endl;
            return;
        }
    }
    cout << "Author not found" << endl;
}

void LIBRARY::printAuthorBooks(const int& id){

    bool found = false;
 
    for(auto &a : authors) {
        if (a.getId() == id ){
            cout << "Author: " << a.getName() << "\n";
            break;
        }
    }     
    
    for (auto &b : books){
        if (b.getAuthorId() == id){

            cout << "\t* " <<  b.getTitle() << endl;
            found = true;
        }
    }

    if (!found){
        cout << "No books found for this author" << endl;
    }
}

void LIBRARY::printBook(const int& id){

    for (auto &b : books){
        if (b.getId() == id){

            cout << "Book ID: " << b.getId() << "\n";
            cout << "Title: " << b.getTitle() << "\n";
            cout << "Publish Date: " << b.getPublishDate() << "\n";
            cout << "Version: " << b.getVersion() << endl;

            for(auto &a : authors) {
                if (a.getId() == b.getAuthorId()){
                    cout << "Author: " << a.getName() << endl;
                    break;
                }
            }
            return;
        }
    }

    cout << "Book not found" << endl;
}