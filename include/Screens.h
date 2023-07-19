#ifndef SCREENS_H
#define SCREENS_H
#include "Person.h"
#include "Admin.h"
#include "AdminManager.h"
#include "Employee.h"
#include "EmployeeManager.h"
#include "Client.h"
#include "ClientManager.h"
#include "Validation.h"
#include "Parser.h"
#include "DataSourceInterface.h"
#include "FileManager.h"
#include "FilesHelper.h"

class Screens
{
    private:
        static void BankName(){
            cout << "A3MR" << endl;
        }
        static void Welcome(){
            cout << "Welcome to A3MR Bank" << endl;
            cout << "Please login to continue.." << endl;
        }
        static void LoginOptions(){
            cout << "Login AS: " << endl;
            cout << "1- Admin" << endl;
            cout << "2- Employee" << endl;
            cout << "3- Client" << endl;
        }
        static void LoginAs(){
            cout << "Please select an option to login!"
            int option;
            cin >> option;
            if(option == 1 || option == 2 || option == 3){
                system("cls");
                return option;
            }else{
                system("cls");
                cout << "Note: only a number from 1 to 3" <<  endl;
                return LoginAs();
            }
        }
        static void Invalid(int c){
            system("cls");
            cout << "Incorrect ID or Password" << endl;
            LoginScreen(c);
        }
        static void Logout(){
            system("cls");
            LoginScreen(LoginAs());
        }
        static void LoginScreen(int c){
           int option = c;
           int id;
           string password;
           cout << "Please enter your ID: " << endl;
           cin >> id;
           cout << "Please enter your password" << endl;
           cin >> password;
           switch (option){
           case 1:
                if (AdminManager::login(id, pass) != NULL) {
				   while (AdminManager::adminOptions(AdminManager::login(id, pass)) != false);
                   logout();
                }else{
                    Invalid(1);
                }
                break;
            case 2:
			     if (EmployeeManager::login(id, pass) != NULL) {
				    while (EmployeeManager::employeeOptions(EmployeeManager::login(id, pass)) != false);
				    logout();
			     }else{
                     Invalid(2);
			}
                break;
		   case 3:
			    if (ClientManager::login(id, pass) != NULL){
				   while (ClientManager::clientOptions(ClientManager::login(id, pass)) != false);
				   logout();
			    }else{
			        Invalid(3);
			}
			    break;
           default:
			   system("cls");
               loginOptions();
            }
        }
    public:
        static void RunApp(){
            FileManager::getAllData();
            welcome();
            loginScreen(loginAs());
        }

};

#endif // SCREENS_H
