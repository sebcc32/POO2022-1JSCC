//
// Created by sebas on 4/3/2022.
//

#include "DailyEmployee.h"

DailyEmployee::DailyEmployee(const string &first, const string &last, const string &ssn, double days) : Employee(first, last, ssn){
    setWorkedDays(days);
}

void DailyEmployee::setWorkedDays(double days){
    workedDays=days;
}

double DailyEmployee::getWorkedDays() const{
    return workedDays;
}

double DailyEmployee::earnings() const{
    return (workedDays>0)?(workedDays*dailyWage):0.0;
}

void DailyEmployee::print() const{
    cout<<"Daily employee: ";
    Employee::print();
    cout<<"\nworked days: "<<getWorkedDays()<<"; daily wage: "<<dailyWage;
}