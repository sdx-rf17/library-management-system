#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include "Author.hpp"
using namespace std;

class BOOK{
    private:
        int id;
        string title;
        string publish_date;
        short version;
        int author_id;
    public:
        BOOK();
        BOOK(int ID, string TITLE, string PUBLISH_DATE, short VERSION, int AUTHOR_ID);
        int getId() const;
        string getTitle() const;
        string getPublishDate() const;
        short getVersion() const;
        int getAuthorId() const;
};

#endif