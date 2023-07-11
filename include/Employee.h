#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<Person.h>
#include <vector>
#include <Client.h>

class Employee:public Person{
    //data members:
    protected:
    double salary;
    public:
    //constructors
    Employee(){}
    Employee(int id, string name, string password, double salary):Person(id,name,password){
        setSalary(salary);
    }
//Setter & Getter
    void setSalary(int salary){
            while(true){
            if(minSalary(salary)){
                this->salary = salary;
                break;
            } else {
                cout<<"very low balance"<<endl;
                cout<<"Enter Balance";
                cin>>salary;
            }
        }
    }
    double getSalary(){
        return salary;
    }
//Methods


    bool minSalary(double salary){
        if(salary >= 5000){
            return true;
        }else{
            cout << "Invalid salary!!" << endl;
            return false;
        }
    }
        void addClient(Client& client){
            allClients.push_back(client);
        }


    /*
    Client* searchClient(int id){
        for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			if (clIt->getId() == id) return clIt._Ptr;
		}
		return NULL;
    }
    */


    void display() {
        cout << "-----------------------------------------------------" << endl;
        cout << "==================== display data:-====================" << endl;
        Person::display();
        cout << "Your Balance is : " << this->salary <<endl;
        cout << "-----------------------------------------------------" << endl;
    }

    //Distracure
    ~Employee(){
        cout<<" ! - END Employee - !"<<endl;
    }
};

static vector<Employee> allEmployees;
static vector<Employee>::iterator eIt;

#endif // EMPLOYEE_H
