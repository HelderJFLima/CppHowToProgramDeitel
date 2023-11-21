// Exercise 3.13
// Test of a class called Invoice that a hardware store might use to represent
// an invoice for an item sold at the store.


#include <iostream>
#include "Invoice.h"

using namespace std;


// Test program that demonstrates class Invoice's capabilities.

int main()
{
    Invoice invoice1("001", "inv01", 3, 111);
    Invoice invoice2("002", "inv02", 0, 0);
    Invoice invoice3("003", "inv03", -1, -1);

    cout << "\ninvoice1:\n"
            "\nnumber: " << invoice1.getNumber()
         << "\ndescription: " << invoice1.getDescription()
         << "\nquantity: " << invoice1.getQuantity()
         << "\nprice: " << invoice1.getPrice()
         << "\namount: " << invoice1.getInvoiceAmount() << endl;

    cout << "\n\ninvoice2:\n"
            "\nnumber: " << invoice2.getNumber()
         << "\ndescription: " << invoice2.getDescription()
         << "\nquantity: " << invoice2.getQuantity()
         << "\nprice: " << invoice2.getPrice()
         << "\namount: " << invoice2.getInvoiceAmount() << endl;

    cout << "\n\ninvoice3:\n"
            "\nnumber: " << invoice3.getNumber()
         << "\ndescription: " << invoice3.getDescription()
         << "\nquantity: " << invoice3.getQuantity()
         << "\nprice: " << invoice3.getPrice()
         << "\namount: " << invoice3.getInvoiceAmount() << endl;

    cout << endl;

    invoice1.setNumber("001x");
    invoice1.setDescription("inv01x");
    invoice1.setQuantity(-1);
    invoice1.setPrice(-100);

    invoice2.setNumber("002x");
    invoice2.setDescription("inv02x");
    invoice2.setQuantity(1);
    invoice2.setPrice(100);

    invoice3.setNumber("003x");
    invoice3.setDescription("inv03x");
    invoice3.setQuantity(5);
    invoice3.setPrice(50);

    cout << "\ninvoice1:\n"
            "\nnumber: " << invoice1.getNumber()
         << "\ndescription: " << invoice1.getDescription()
         << "\nquantity: " << invoice1.getQuantity()
         << "\nprice: " << invoice1.getPrice()
         << "\namount: " << invoice1.getInvoiceAmount() << endl;

    cout << "\n\ninvoice2:\n"
            "\nnumber: " << invoice2.getNumber()
         << "\ndescription: " << invoice2.getDescription()
         << "\nquantity: " << invoice2.getQuantity()
         << "\nprice: " << invoice2.getPrice()
         << "\namount: " << invoice2.getInvoiceAmount() << endl;

    cout << "\n\ninvoice3:\n"
            "\nnumber: " << invoice3.getNumber()
         << "\ndescription: " << invoice3.getDescription()
         << "\nquantity: " << invoice3.getQuantity()
         << "\nprice: " << invoice3.getPrice()
         << "\namount: " << invoice3.getInvoiceAmount() << endl;
}
