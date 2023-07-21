#ifndef FILESHELPER_H
#define FILESHELPER_H
#pragma once
#include <iostream>
#include <string>


#include <fstream>
#include "Parser.h"

class FilesHelper {
//MTHODS -> !
public:
   static void saveLast(string enterLastIDataBase, int id){
        ofstream MyClientLastId(enterLastIDataBase);
        MyClientLastId<<id;
   };
   static int getLast(string getLastIdDataBase){
        string line;
        int lastId = 0;
        ifstream getId(getLastIdDataBase);
        if(!getId.is_open()){
            cerr<< "Error opening file: " << getLastIdDataBase<<endl;
            return 0;
        }
        getline(getId, line);
            try {
                int currentId = stoi(line);
                lastId = currentId;
            }catch (invalid_argument& e) {
                cout << "Invalid argument: " << e.what() << endl;
            }
        return lastId;
   };

   static void saveClient(Client c){
        ofstream MyClient("Clients.txt",ios::app);
        string ClientLastId = "ClientLastId.txt";
        int setLastId = getLast(ClientLastId);
        setLastId++;
        saveLast(ClientLastId,setLastId);
        if(MyClient.is_open()){
            MyClient<< setLastId <<"*"<<c.getName()<<"*"<<c.getPassword()<<"*"<<c.getBalance()<<endl;
        } else {
            cout <<"Field"<<endl;
        }
   };
   static void saveEmployeeOrAdmin(string fileName, string lastIdFile, Employee e){
        ofstream file_Employee_Admin(fileName,ios::app);
        int setLastId = getLast(lastIdFile);
        setLastId++;
        saveLast(lastIdFile,setLastId);
        if(file_Employee_Admin.is_open()){
            file_Employee_Admin<< setLastId <<"*"<<e.getName()<<"*"<<e.getPassword()<<"*"<<e.getSalary()<<endl;
        }else{
            cout <<"Field"<<endl;
        }
   };


   static void getClients() {
        ifstream inputFile("Clients.txt");
        string line;
        while (getline(inputFile, line))
        {
        Client client = Parser::parseToClient(line);
        allClients.push_back(client);
		}
        inputFile.close();
    }

   static void getEmployees() {
        ifstream inputFile("Employee.txt");
        string line;
        while (getline(inputFile, line))
        {
            Employee employee = Parser::parseToEmployee(line);
            allEmployees.push_back(employee);
		}
        inputFile.close();
   };
    static void getAdmins() {
		string line;
		ifstream file;
		file.open("Admin.txt");
		while (getline(file, line)) {
			Admin a = Parser::parseToAdmin(line);
			allAdmins.push_back(a);
		}
		file.close();
	}
	static void clearFile(string fileName, string lastIdFile){
       ofstream file(fileName);
       ofstream lastIdFileStream(lastIdFile);
        if (!file.is_open() || !lastIdFileStream.is_open()) {
            cerr << "Failed to open file or lastIdFile." << endl;
            return;
        }
        file.close();
        lastIdFileStream.close();
        cout << "File cleared successfully." << endl;
   };

};

#endif // FILESHELPER_H
