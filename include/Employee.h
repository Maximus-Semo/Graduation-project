#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<Person.h>
class Employee : public Person{
    //data members:
    protected:
    double salary;
    public:
    //constructors
    Employee(){}
    Employee(int id, string name, string password, double salary):Person(id,name,password){
        if(minBalance(salary)){
            this->salary = salary;
        }
    }
//Setter & Getter
    void setSalary(int salary){
        if (minBalance(salary))
        {
            this->salary=salary;
        }
    }
    double getSalary(){
        return salary;
    }
//Methods
    bool minBalance(double salary){
        if(salary >= 5000){
            return true;
        }else{
            cout << "Invalid salary!!" << endl;
            return false;
        }
    }
    void display() {
        cout << "-----------------------------------------------------" << endl;
        cout << "==================== display data:-====================" << endl;
        Person::display();
        cout << "Your Balance is : " << this->salary <<endl;
        cout << "-----------------------------------------------------" << endl;
    }
    //Distracure
    ~Employee(){
        cout<<endl;
    }
};

#endif // EMPLOYEE_H
