#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H
#pragma once
#include <iostream>
#include <string>

#include "FileManager.h"
#include "Employee.h"
#include "validation.h"
#include <unistd.h>
#include <chrono>

class EmployeeManager{
    private:
    static void printEmployeeMenu(){
		cout << "(1) Display my info" << endl;
		cout << "(2) Search for client" << endl;
		cout << "(3) Update Password" << endl;
		cout << "(4) List all clients" << endl;
		cout << "(5) Add new client" << endl;
		cout << "(6) Edit client info" << endl;
		cout << "(7) Logout" << endl;
	}
    public:
        static void back(Employee* employee) {
		cout << endl;
		system("pause");
		employeeOptions(employee);
	}
	static void NewClient(Employee* employee){
            string Name , Password;
            double balance ;
            cout<< "Enter Name : ";
            cin>> Name;
            cout<< "Enter Password : " ;
            cin>>Password;
            cout<< "Enter Balance : ";
            cin>>balance;
            int id;
            id = FilesHelper::getLast("ClientLastId.txt");
            Client c(id,Name,Password,balance);
            employee->addClient(c);
            FileManager::updateClients();
            cout<< " SUCCESS !! " << endl ;
	}
	static void listAllClients(Employee* employee){
            employee->listClient();
	}
	static void searchForClient(Employee* employee){
            int id;
            cout << " Enter Client id : ";
            cin >> id;
            if (employee->searchClient(id) == NULL)
            {
                cout << " Not found !! ";}
        else{
            cout<< " Founded !! " << endl;;
            // This (display method) get used to client class
            employee->searchClient(id)->display();
        }
	}

	static void editClientInfo(Employee* employee){
           int id;
           cout<< " Enter Client id : " ;
           cin>>id;
           if(employee->searchClient(id)==NULL){
                cout<< " Not Found !! "<<endl;
           }else{
                string name,password;
            double balance;
            cout<< " Enter Name : ";
            cin>> name;
            cout<< " Enter Password : ";
            cin>> password;
            cout<< " Enter Balance : ";
            cin>>balance;
            Client c(id,name,password,balance);
            employee->editClient(id,name,password,balance);
            FileManager::updateClients();
           }
           cout<< " Success Update !! " << endl ;
	}
	static Employee* login(int id, string password) {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			if (eIt->getId() == id && eIt->getPassword() == password) return &(*eIt);
		}
		return NULL;
	}
    void UpdatePassword(){}

	static bool employeeOptions(Employee* employee){
        printEmployeeMenu();
        int choice;
        cin >> choice;
        switch(choice){
            case 1:
            system("cls");
            employee->display();
            break;
            case 2:
            system("cls");
            searchForClient(employee);
            break;
            case 3:
            system("cls");
            FileManager::updateClients();
            break;
            case 4:
            system("cls");
            listAllClients(employee);
            break;
            case 5:
            system("cls");
            NewClient(employee);
            FileManager::updateClients();
            break;
            case 6:
            system("cls");
            editClientInfo(employee);
            break;
            case 7:
            return false;
            break;
            default:
            system("cls");
            employeeOptions(employee);
            return true ;
            back(employee);
            break;

        }
	}


};

#endif // EMPLOYEEMANAGER_H

