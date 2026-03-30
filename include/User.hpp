#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class USER {
private:
    int user_Id;
    string user_name;
public:
    int getUserId() const;
    string getUserName() const;
};

#endif