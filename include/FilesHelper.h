#ifndef FILESHELPER_H
#define FILESHELPER_H

#include<iostream>
#include<string>

using namespace std;
class FilesHelper {

public:
    //Methods
   static void saveLast(string fileName, int id){};
   static int getLast(string fileName){};
   static void saveClient(Client c){};
   static void saveEmployee(string fileName, string lastIdFile, Employee e){};
   static void getClient(){};
   static void getEmployees(){};
   static void getAdmins(){};
   static void clearFile(string fileName, string lastIdFile){};

};

#endif // FILESHELPER_H
