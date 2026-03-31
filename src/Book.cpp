#include "Book.hpp"
#include "Author.hpp"

BOOK::BOOK() : id(0), title(""), publish_date(""), version(0), author_id(0) {}

BOOK::BOOK(int ID, string TITLE, string PUBLISH_DATE, short VERSION, int AUTHOR_ID) {
    this->id = ID;
    this->title = TITLE;
    this->publish_date = PUBLISH_DATE;
    this->version = VERSION;
    // this->authors = AUTHORS;
    this->author_id = AUTHOR_ID; 
}

int BOOK::getId() const{
    return id;
}

string BOOK::getTitle() const{
    return title;
}

string BOOK::getPublishDate() const{
    return publish_date;
}

short BOOK::getVersion() const{
    return version;
}


int BOOK::getAuthorId() const{
    return author_id;
}