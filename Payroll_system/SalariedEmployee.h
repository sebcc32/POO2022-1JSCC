//
// Created by sebas on 4/2/2022.
//

#ifndef PAYROLL_SYSTEM_SALARIEDEMPLOYEE_H
#define PAYROLL_SYSTEM_SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee{
public:
    SalariedEmployee(const string&, const string&, const string&, double=0.0);
    void setWeeklySalary(double);
    double getWeeklySalary() const;
    double earnings() const override;
    void print() const override;
private:
    double weeklySalary;
};

#endif //PAYROLL_SYSTEM_SALARIEDEMPLOYEE_H
