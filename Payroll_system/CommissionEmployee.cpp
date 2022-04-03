//
// Created by sebas on 4/2/2022.
//

#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate) : Employee(first, last, ssn){
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setCommissionRate(double rate){
    commissionRate=(rate>0.0 && rate<1.0)?rate:0.0;
}

void CommissionEmployee::setGrossSales(double sales){
    grossSales=(sales<0.0)?0.0:sales;
}

double CommissionEmployee::getCommissionRate() const{
    return commissionRate;
}

double CommissionEmployee::getGrossSales() const{
    return grossSales;
}

double CommissionEmployee::earnings() const{
    return getCommissionRate()*getGrossSales();
}

void CommissionEmployee::print() const{
    cout<<"commission employee: ";
    Employee::print();
    cout<<"\ngross sales: "<<getGrossSales()<<"; commission rate: "<<getCommissionRate();
}