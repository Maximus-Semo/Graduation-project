#ifndef ADMIN_H
#define ADMIN_H
#include<Employee.h>

class Admin:public Employee{
private:
    //data memeber
    public:
    //constructors
    Admin(){}
    Admin(int id,string name,string password,double salary):Employee(id,name,password,salary){}

    //Methods
    void display(){
        Employee::display();
    }
    //Dist
    ~Admin(){
        cout<<endl;
    }
};
#endif // ADMIN_H
