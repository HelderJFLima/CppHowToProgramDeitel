// Exercise 3.12
// Account class that a bank might use to represent customers' bank accounts.


class Account
{

public:

    Account(int initialBalance);

    void credit(int value);

    void debit(int value);

    int getBalance();

private:

    int balance;

};
