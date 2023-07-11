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



        /*
        void FileManager::addClient(Client c) {
            FilesHelper::saveClient(c);
        }

        void FileManager::addEmployee(Employee e) {
            FilesHelper::saveEmployeeOrAdmin("Employee.txt", "EmployeeLastId.txt", e);
        }

        void FileManager::addAdmin(Admin a) {
            FilesHelper::saveEmployeeOrAdmin("Admin.txt", "AdminLastId.txt", a);
        }

        std::vector<Client> FileManager::getAllClients() {
            vector<Client> clients;
            ifstream inputFile("Clients.txt");
            string line;
            while (getline(inputFile, line)) {
                // Parse line to Client
                Client client = Parser::parseToClient(line);
                clients.push_back(client);
            }
            inputFile.close();
            return clients;
        }

        vector<Employee> FileManager::getAllEmployees() {
            vector<Employee> employees;
            ifstream inputFile("Employee.txt");
            string line;
            while (getline(inputFile, line)) {
                // Parse line to Employee
                Employee employee = Parser::parseToEmployee(line);
                employees.push_back(employee);
            }
            inputFile.close();
            return employees;
        }

        vector<Admin> FileManager::getAllAdmins() {
            vector<Admin> admins;
            ifstream inputFile("Admin.txt");
            string line;
            while (getline(inputFile, line)) {
                // Parse line to Admin
                Admin admin = Parser::parseToAdmin(line);
                admins.push_back(admin);
            }
            inputFile.close();
            return admins;
        }

        void FileManager::removeAllClients() {
            FilesHelper::clearFile("Clients.txt", "ClientLastId.txt");
        }

        void FileManager::removeAllEmployees() {
            FilesHelper::clearFile("Employee.txt", "EmployeeLastId.txt");
        }

        void FileManager::removeAllAdmins() {
            FilesHelper::clearFile("Admin.txt", "AdminLastId.txt");
        }
        */


};

#endif // FILEMANAGER_H
