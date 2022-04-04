//
// Created by sebas on 4/3/2022.
//

#ifndef PAYROLL_SYSTEM_DAILYEMPLOYEE_H
#define PAYROLL_SYSTEM_DAILYEMPLOYEE_H

#include "Employee.h"

class DailyEmployee : public Employee{
public:
    static const int dailyWage=12;
    DailyEmployee(const string&, const string&, const string&, double workedDays);
    void setWorkedDays(double);
    double getWorkedDays() const;
    double earnings() const override;
    void print() const override;
private:
    double workedDays;
};

#endif //PAYROLL_SYSTEM_DAILYEMPLOYEE_H
