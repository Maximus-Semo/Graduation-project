#ifndef FILESHELPER_H
#define FILESHELPER_H

#include <Parser.h>
#include <sstream>
#include <fstream>
#include <iostream>
#include<string>
#include <typeinfo>

using namespace std;
class FilesHelper {
//MTHODS -> !
public:
    static void saveLast(const string& enterLastIDataBase, int id){
        ofstream MyClientLastId(enterLastIDataBase);
        MyClientLastId<<id;
   };

   //Get Last ID form -> file:.
   static int getLast(const string& getLastIdDataBase){
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
   static void saveEmployeeOrAdmin(string& fileName, string& lastIdFile, Employee &e){
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
        // Parse line to Client
        Client client = Parser::parseToClient(line);
        cout << "<----------------- Client ------------------------>"<<endl;
        cout << "Your Id is : "  << client.getId() << endl;
		cout << "Your Name is :  " << client.getName() << endl;
		cout << "Your Password is : " << client.getPassword()<< endl;
		cout << "Your Balance is : " << client.getBalance()<< endl;
		}

        inputFile.close();
    }

   static void getEmployees() {
        ifstream inputFile("Employee.txt");
        string line;
        while (getline(inputFile, line))
        {
        // Parse line to Client
        Employee employee = Parser::parseToEmployee(line);
        cout << "<----------------- Employee ------------------------>"<<endl;
        cout << "Your Id is : "  << employee.getId() << endl;
		cout << "Your Name is :  " << employee.getName() << endl;
		cout << "Your Password is : " << employee.getPassword()<< endl;
		cout << "Your Salary is : " << employee.getSalary()<< endl;
		}

        inputFile.close();

   };
   static void getAdmins(){
        ifstream inputFile("Admin.txt");
        string line;
        while (getline(inputFile, line))
        {
        // Parse line to Client
        Employee admin = Parser::parseToEmployee(line);
        cout << "<----------------- Admin ----------------------->"<<endl;
        cout << "Your Id is : "  << admin.getId() << endl;
		cout << "Your Name is :  " << admin.getName() << endl;
		cout << "Your Password is : " << admin.getPassword()<< endl;
		cout << "Your Balance is : " << admin.getSalary()<< endl;
		}

    inputFile.close();
   };

// i will check on it this -> Method!
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
