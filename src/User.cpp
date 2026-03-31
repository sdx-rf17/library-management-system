#include "User.hpp"

USER::USER(int USER_ID, string USER_NAME) {
    this->user_Id = USER_ID;
    this->user_name = USER_NAME;
}

int USER::getUserId() const{
    return user_Id;
}

string USER::getUserName() const{
    return user_name;
}