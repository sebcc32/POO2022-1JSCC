//
// Created by sebas on 4/1/2022.
//

#ifndef PAYROLL_SYSTEM_EMPLOYEE_H
#define PAYROLL_SYSTEM_EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
    Employee(const string&,const string&,const string&);
    void setFirstName(const string&);
    void setLastName(const string&);
    void setSocialSecurityNumber(const string&);
    string getFirstName() const;
    string getLastName() const;
    string getSocialSecurityNumber() const;
    virtual double earnings() const = 0;
    virtual void print() const;
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
};

#endif //PAYROLL_SYSTEM_EMPLOYEE_H
