#ifndef LOAN_H
#define LOAN_H

#include <iostream>
using namespace std;

class LOAN{
private:
    int user_id;
    int book_id;
    string borrow_date;
    string return_date;

public:
    LOAN(int user_id, int book_id, string borrow_date, string return_date);
    
    int getUserId() const;
    int getBookId() const;
    string getBorrowDate() const;
    string getReturnDate() const;
};

#endif