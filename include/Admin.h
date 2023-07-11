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
	void addEmployee(Employee& employee) {
		allEmployees.push_back(employee);
	}
	Employee* searchEmployee(int id) {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			if (eIt->getId() == id) return &(*eIt);
		}
		return NULL;
	}
	void editEmployee(int id, string name, string password, double salary) {
		searchEmployee(id)->setName(name);
		searchEmployee(id)->setPassword(password);
		searchEmployee(id)->setSalary(salary);
	}
	void listEmployee() {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			eIt->display();
			cout << "--------------------\n";
		}
	}
    void display(){
        Employee::display();
    }
    //Dist
    ~Admin(){}
};

static vector<Admin> allAdmins;
static vector<Admin>::iterator aIt;

#endif // ADMIN_H
