//
// Created by sebas on 4/2/2022.
//

#ifndef PAYROLL_SYSTEM_COMMISSIONEMPLOYEE_H
#define PAYROLL_SYSTEM_COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee : public Employee{
public:
    CommissionEmployee(const string&, const string&, const string&, double=0.0, double=0.0);
    void setCommissionRate(double);
    void setGrossSales(double);
    double getCommissionRate() const;
    double getGrossSales() const;
    double earnings() const override;
    void print() const override;
private:
    double grossSales;
    double commissionRate;
};

#endif //PAYROLL_SYSTEM_COMMISSIONEMPLOYEE_H
