#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class USER {
private:
    int user_Id;
    string user_name;
public:
    USER(int USER_ID , string USER_NAME);
    
    int getUserId() const;
    string getUserName() const;
};

#endif