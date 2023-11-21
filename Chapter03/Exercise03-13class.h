// Exercise 3.13
// Class called Invoice that a hardware store might use to represent an invoice
// for an item sold at the store.


#include <string>

using namespace std;


class Invoice
{

public:

    Invoice(string number, string description, int quantity, int price);

    void setNumber(string number);

    string getNumber();

    void setDescription(string description);

    string getDescription();

    void setQuantity(int quantity);

    int getQuantity();

    void setPrice(int price);

    int getPrice();

    int getInvoiceAmount();

private:

    string invoiceNumber;

    string invoiceDescription;

    int invoiceQuantity;

    int invoicePrice;

};
