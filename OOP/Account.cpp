//
// Created by usama on 2/26/18.
//
#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(unsigned int account, unsigned int balance1) {
    accountNumber = account;
    if(balance1>=0)  balance = balance1;
    else{
        cout<< "\ninitial balance was invalid";
        balance = 0;
    }


}

void Account::credit(unsigned int amount) {
    balance+=amount;
}

void Account::debit(unsigned int amount) {
    if (amount<=balance)
    {
        balance-=amount;
    } else cout<< "\nDebit amount exceeded account balance.";
}

unsigned int Account::getBalance() {
    return balance;
}

Account::~Account() {
    cout<< "\nObject destroyed";
}


