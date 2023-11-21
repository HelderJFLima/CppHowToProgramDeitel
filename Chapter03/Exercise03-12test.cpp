// Exercise 3.12
// Test of an Account class that a bank might use to represent customers' bank
// accounts.


#include <iostream>
#include "Account.h"

using namespace std;


// Program that creates two Account objects and tests the member functions
// of class Account.

int main()
{
    int credit, debit;
    Account account1(1000);
    Account account2(-1000);

    cout << "account1 balance: " << account1.getBalance() << endl;
    cout << "account2 balance: " << account2.getBalance() << endl;

    credit = 100;

    debit = 200;

    account1.credit(credit);
    account1.debit(debit);

    account2.credit(credit);
    account2.debit(debit);

    cout << "account1 balance: " << account1.getBalance() << endl;
    cout << "account2 balance: " << account2.getBalance() << endl;

    account1.credit(0);
    account1.debit(0);

    account2.credit(0);
    account2.debit(0);

    cout << "account1 balance: " << account1.getBalance() << endl;
    cout << "account2 balance: " << account2.getBalance() << endl;
}
