#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "DailyEmployee.h"
#include <iomanip>
#include <vector>
#include <typeinfo>

int main(){
    cout<<fixed<<setprecision(5);
    vector<Employee*> employees(5);
    employees[0]=new SalariedEmployee("John", "Smith", "111-11-1111",800);
    employees[1]=new HourlyEmployee("Karen", "Price", "222-22-2222",16.75,40);
    employees[2]=new CommissionEmployee("Sue", "Jones", "333-33-3333",10000,.06);
    employees[3]=new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444",500,.04,300);
    employees[4]=new DailyEmployee("Sebastian", "Camacho", "555-55-5555",25);
    for(size_t i=0;i<employees.size();i++){
        employees[i]->print();
        cout<<endl;
        BasePlusCommissionEmployee *derivedPtr=dynamic_cast<BasePlusCommissionEmployee*> (employees[i]);
        if(derivedPtr!=0){
            double oldBaseSalary=derivedPtr->getBaseSalary();
            cout<<"old base salary: $"<<oldBaseSalary<<endl;
            derivedPtr->setBaseSalary(1.10*oldBaseSalary);
            cout<<"new base salary with 10% increase: $"<<derivedPtr->getBaseSalary()<<endl;
        }
        cout<<"earned $"<<employees[i]->earnings()<<"\n\n";
    }
    for(size_t j=0;j<employees.size();j++){
        cout<<"deleting object of "<< typeid(*employees[j]).name()<<endl;
        delete employees[j];
    }
    return 0;
}