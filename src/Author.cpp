#include  "include/Author.hpp"

AUTHOR::AUTHOR() : id(0), name(""), phone(""), email("") {}

AUTHOR::AUTHOR(int ID, string NAME, string PHONE, string EMAIL){
    this->id = ID;
    this->name = NAME;
    this->phone = PHONE;
    this->email = EMAIL; 
}

int AUTHOR::getId() const {
    return id;
}

string AUTHOR::getName() const {
    return name;
}

string AUTHOR::getPhone() const {
    return phone;
}

string AUTHOR::getEmail() const {
    return email;
}