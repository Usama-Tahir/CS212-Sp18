#include <iostream>
#include "Account.h"
#include "Complex.h"
#include "Time.h"
int main() {
    Account ac1(12345678, 100);
    ac1.credit(50);
    cout<<ac1.getBalance()<<endl;
    ac1.debit(151);
    cout<<endl;
    Complex c1;
    c1.printData();
    c1.calculateConjugate();
    cout<<endl;
    Time t1(11,59,2, false);
    t1.incrementHours();
    t1.incrementMinutes();
    t1.displayTime();

}