// Exercise 3.13
// Class called Invoice that a hardware store might use to represent an invoice
// for an item sold at the store.


#include <iostream>
#include "Invoice.h"

using namespace std;


// Constructor that initializes the four data members.

Invoice::Invoice(string number, string description, int quantity, int price)
{
    setNumber(number);

    setDescription(description);

    setQuantity(quantity);

    setPrice(price);
}


// Set Invoice number.

void Invoice::setNumber(string number)
{
    invoiceNumber = number;
}


// Get Invoice number.

string Invoice::getNumber()
{
    return invoiceNumber;
}


// Set Invoice description.

void Invoice::setDescription(string description)
{
    invoiceDescription = description;
}


// Get Invoice description.

string Invoice::getDescription()
{
    return invoiceDescription;
}


// Set Invoice quantity.

void Invoice::setQuantity(int quantity)
{
    if(quantity >= 0)
        invoiceQuantity = quantity;

    if(quantity < 0)
    {
        invoiceQuantity = 0;

        cout << "Invalid quantity value!\n\nSetting quantity to zero.\n"
             << endl;
    }
}


// Get Invoice quantity.

int Invoice::getQuantity()
{
    return invoiceQuantity;
}


// Set Invoice price.

void Invoice::setPrice(int price)
{
    if(price >= 0)
        invoicePrice = price;

    if(price < 0)
    {
        invoicePrice = 0;

        cout << "Invalid price value!\n\nSetting price to zero.\n" << endl;
    }
}


// Get Invoice price.

int Invoice::getPrice()
{
    return invoicePrice;
}


// Calculates Invoice amount (quantity x price).

int Invoice::getInvoiceAmount()
{
    return getQuantity() * getPrice();
}
