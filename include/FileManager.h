#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#pragma once
#include <fstream>
#include <sstream>
#include <vector>
#include "DataSourceInterface.h"
#include "FilesHelper.h"

class FileManager : public DataSourceInterface{
        public:
             void addClient(Client client){
                FilesHelper::saveClient(client);
            }
             void addEmployee(Employee e){
                string MyClient("Employee.txt");
                string ClientLastId = "EmployeeLastId.txt";
                FilesHelper::saveEmployeeOrAdmin(MyClient,ClientLastId,e);
            }
            void addAdmin(Admin a){
                string MyAdmin("Admin.txt");
                string AdminLastId = "AdminLastId.txt";
                FilesHelper::saveEmployeeOrAdmin(MyAdmin,AdminLastId,a);
            }

            void getAllClients(){
                FilesHelper::getClients();
            }

            void getAllEmployees(){
                FilesHelper::getEmployees();
            }
            void getAllAdmins(){
                FilesHelper::getAdmins();
            }

            void removeAllClients(){
                string fileClients = "Clients.txt";
                string fileLastIdClients = "ClientLastId.txt";
                FilesHelper::clearFile(fileClients,fileLastIdClients);
            }
            void removeAllEmployees(){
                string fileEmployees= "Employee.txt";
                string fileLastIdEmployees = "EmployeeLastId.txt";
                FilesHelper::clearFile(fileEmployees,fileLastIdEmployees);
            }
            void removeAllAdmins(){
                string fileClients = "Admin.txt";
                string fileLastIdClients = "AdminLastId.txt";
                FilesHelper::clearFile(fileClients,fileLastIdClients);
            }
            static void updateClients()
            {
                removeAllClients();
                for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) addClient(*clIt);
            }
            static void updateEmployees()
            {
                removeAllEmployees();
                for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) addEmployee(*eIt);
            }
            static void updateAdmins()
            {
                removeAllAdmins();
                for (aIt = allAdmins.begin(); aIt != allAdmins.end(); aIt++) addAdmin(*aIt);
            }
            static void getAllData() {
            getAllClients();
            getAllEmployees();
            getAllAdmins();

};

#endif // FILEMANAGER_H
