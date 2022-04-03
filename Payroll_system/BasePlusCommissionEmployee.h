//
// Created by sebas on 4/3/2022.
//

#ifndef PAYROLL_SYSTEM_BASEPLUSCOMMISSIONEMPLOYEE_H
#define PAYROLL_SYSTEM_BASEPLUSCOMMISSIONEMPLOYEE_H

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee{
public:
    BasePlusCommissionEmployee(const string&, const string&, const string&, double=0.0, double=0.0, double=0.0);
    void setBaseSalary(double);
    double getBaseSalary() const;
    double earnings() const override;
    void print() const override;
private:
    double baseSalary;
};

#endif //PAYROLL_SYSTEM_BASEPLUSCOMMISSIONEMPLOYEE_H
