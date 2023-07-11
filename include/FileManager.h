#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <DataSourceInterface.h>
#include <FilesHelper.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <Admin.h>
#include <Client.h>
#include <Employee.h>
using namespace std;
class FileManager :public DataSourceInterface{
    public:
        public:
            void addClient(Client c){
                FilesHelper::saveClient(c);
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
};

#endif // FILEMANAGER_H
