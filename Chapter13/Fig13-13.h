// Fig. 13.13: CommissionEmployee.h
// CommissionEmployee class derived from Employee.


#ifndef COMMISSION_H
#define COMMISSION_H


#include "Employee.h"

using namespace std;


class CommissionEmployee : public Employee
{

public:

    CommissionEmployee(const string &, const string &, const string &,
                       double = 0.0, double = 0.0);

    void setGrossSales(double);

    double getGrossSales() const;

    void setCommissionRate(double);

    double getCommissionRate() const;

    virtual double earnings() const;

    virtual void print() const;

private:

    double grossSales;

    double commissionRate;

};


#endif // COMMISSION_H
