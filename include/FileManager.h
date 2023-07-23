#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Admin.h"
#include "DataSourceInterface.h"
#include "FilesHelper.h"


class FileManager : public DataSourceInterface {

        private:
            static void addClient(Client client){
                FilesHelper::saveClient(client);
            }
            static void addEmployee(Employee e){
                FilesHelper::saveEmployeeOrAdmin("Employee.txt","EmployeeLastId.txt",e);
            }
            static void addAdmin(Admin a){
                FilesHelper::saveEmployeeOrAdmin("Admin.txt","AdminLastId.txt",a);
            }

            static void getAllClients(){
                FilesHelper::getClients();
            }

           static void getAllEmployees(){
                FilesHelper::getEmployees();
            }
           static void getAllAdmins(){
                FilesHelper::getAdmins();
            }

            static void removeAllClients(){
                FilesHelper::clearFile("Clients.txt","ClientLastId.txt");
            }
            static void removeAllEmployees(){
                FilesHelper::clearFile("Employee.txt","EmployeeLastId.txt");
            }
            static void removeAllAdmins(){
                FilesHelper::clearFile("Admin.txt","AdminLastId.txt");
            }

            public:
        static void getAllData() {
            getAllClients();
            getAllEmployees();
            getAllAdmins();
        }
        static void updateClients() {
            removeAllClients();
            for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) addClient(*clIt);
        }
        static void updateEmployees() {
            removeAllEmployees();
            for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) addEmployee(*eIt);
        }
        static void updateAdmins() {
            removeAllAdmins();
            for (aIt = allAdmins.begin(); aIt != allAdmins.end(); aIt++) addAdmin(*aIt);
        }


};

#endif // FILEMANAGER_H
