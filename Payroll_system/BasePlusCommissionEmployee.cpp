//
// Created by sebas on 4/3/2022.
//

#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate, double salaty) : CommissionEmployee(first, last, ssn, sales, rate){
    setBaseSalary(salaty);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary){
    baseSalary=(salary<0.0)?0.0:salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const{
    return getBaseSalary()+CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const{
    cout<<"base-salaried: ";
    CommissionEmployee::print();
    cout<<"; base salaty:"<<getBaseSalary();
}