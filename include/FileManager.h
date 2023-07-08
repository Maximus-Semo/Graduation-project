#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <DataSourceInterface.h>
#include <Admin.h>
#include <Client.h>
#include <Employee.h>
class FileManager :public DataSourceInterface{
    public:
        public:
        void FileManager::addClient(Client c) {
            FilesHelper::saveClient(c);
        }

        void FileManager::addEmployee(Employee e) {
            FilesHelper::saveEmployeeOrAdmin("employees.txt", "employee_last_id.txt", e);
        }

        void FileManager::addAdmin(Admin a) {
            FilesHelper::saveEmployeeOrAdmin("admins.txt", "admin_last_id.txt", a);
        }

        std::vector<Client> FileManager::getAllClients() {
            std::vector<Client> clients;
            std::ifstream inputFile("clients.txt");
            std::string line;
            while (getline(inputFile, line)) {
                // Parse line to Client
                Client client = Parser::parseToClient(line);
                clients.push_back(client);
            }
            inputFile.close();
            return clients;
        }

        std::vector<Employee> FileManager::getAllEmployees() {
            std::vector<Employee> employees;
            std::ifstream inputFile("employees.txt");
            std::string line;
            while (getline(inputFile, line)) {
                // Parse line to Employee
                Employee employee = Parser::parseToEmployee(line);
                employees.push_back(employee);
            }
            inputFile.close();
            return employees;
        }

        std::vector<Admin> FileManager::getAllAdmins() {
            std::vector<Admin> admins;
            std::ifstream inputFile("admins.txt");
            std::string line;
            while (getline(inputFile, line)) {
                // Parse line to Admin
                Admin admin = Parser::parseToAdmin(line);
                admins.push_back(admin);
            }
            inputFile.close();
            return admins;
        }

        void FileManager::removeAllClients() {
            FilesHelper::clearFile("clients.txt", "client_last_id.txt");
        }

        void FileManager::removeAllEmployees() {
            FilesHelper::clearFile("employees.txt", "employee_last_id.txt");
        }

        void FileManager::removeAllAdmins() {
            FilesHelper::clearFile("admins.txt", "admin_last_id.txt");
        }
};

#endif // FILEMANAGER_H
