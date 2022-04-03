//
// Created by sebas on 4/2/2022.
//

#ifndef PAYROLL_SYSTEM_HOURLYEMPLOYEE_H
#define PAYROLL_SYSTEM_HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee{
public:
    static const int hoursPerWeek=168;
    HourlyEmployee(const string&, const string&, const string&, double=0.0, double=0.0);
    void setWage(double);
    void setHours(double);
    double getWage() const;
    double getHours() const;
    double earnings() const override;
    void print() const override;
private:
    double hours;
    double wage;
};
#endif //PAYROLL_SYSTEM_HOURLYEMPLOYEE_H
