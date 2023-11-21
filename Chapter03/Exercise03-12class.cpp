// Exercise 3.12
// Account class that a bank might use to represent customers' bank accounts.


#include <iostream>
#include "Account.h"

using namespace std;


// Constructor that receives an initial balance.

Account::Account(int initialBalance)
{
    if(initialBalance >= 0)
        balance = initialBalance;

    if(initialBalance < 0)
    {
        balance = 0;

        cout << "Invalid balance value!\n\nSetting initial balance to zero.\n"
             << endl;
    }
}


// credit: add an amount to the current balance.

void Account::credit(int value)
{
    if(value > 0)
        balance = balance + value;
}


// debit: withdraw money from the Account ensuring that the debit amount does
//        not exceed the Account’s balance; if it does, the balance is left
//        unchanged and a warning message is printed.

void Account::debit(int value)
{
    if(value <= balance)
        balance = balance - value;

    if(value > balance)
        cout << "Debit amount exceeded account balance.\n" << endl;
}


// getBalance: return the current balance.

int Account::getBalance()
{
    return balance;
}
