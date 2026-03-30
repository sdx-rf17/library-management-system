#ifndef AUTHOR_H
#define AUTHOR_H

#include <iostream> 
using namespace std;

class AUTHOR{
    private:
        int id;
        string name;
        string phone;
        string email;
    public:
        AUTHOR();
        AUTHOR(int ID, string NAME, string PHONE, string EMAIL);
        int getId() const;
        string getName() const;
        string getPhone() const;
        string getEmail() const;
};

#endif