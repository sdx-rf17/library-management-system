#include "include/Loan.hpp"

LOAN::LOAN(int user_id, int book_id, string borrow_date){
    this->user_id = user_id;
    this->book_id = book_id;
    this->borrow_date = borrow_date;
    this->return_date = "not returned";
}

int LOAN::getUserId() const{
    return user_id;
}

int LOAN::getBookId() const{
    return book_id;
}

string LOAN::getBorrowDate() const{
    return borrow_date;
}

string LOAN::getReturnDate() const{
    return return_date;
}

void LOAN::setReturnDate(string date){
    this->return_date = date;
}