//
// Created by usama on 2/26/18.
//

#ifndef OOP_ACCOUNT_H
#define OOP_ACCOUNT_H
#include <string>

using namespace std;

class Account
{
public:
    Account(unsigned int, unsigned int);

    void credit(unsigned int);

    void debit(unsigned int);

    unsigned int getBalance();
    ~Account();

private:
    unsigned int accountNumber;
    unsigned int balance;
};


#endif //OOP_ACCOUNT_H
