#ifndef VALIDATION_H
#define VALIDATION_H
#include <iostream>
#include <string>
#include <cctype>

class Validation {
public:
    //Methods
   static bool setName(string name) {
        if (name.size() < 5 || name.size() > 20) {
            cout << "Error Name size must be from 5 to 20 characters" << endl;
            return false;
        }else{
            for (int i = 0; i < name.size(); i++) {
                if (!(isalpha(name[i])) || name[i]==' ') {
                    cout << "Error Name must contain only alphabetic characters or space" << endl;
                    return false;
                }
            }
        }
        return true;
    }
    static bool setPassword(string password){
        for(int i = 0; i < password.size(); i++){
        if(password.size() >= 8 && password.size() <= 20){
            return true;
        }else{
            cout << "Invalid Password" << endl;
            return false;
        }
     }
    }
// from here

	static string enterName() {
		string name;
		system("cls");
		cout << "Enter name: ";
		cin >> name;
		while (!setName(name)) {
			system("cls");
			cout << "Invalid name!\n";
			cout << "Name must be 5 to 20 alphabetic characters.\n" << endl;
			cout << "Enter name: ";
			cin >> name;
		}
		return name;
	}
	static string enterPassword() {
		string password;
		system("cls");
		cout << "Enter password: ";
		cin >> password;
		while (!setPassword(password)) {
			system("cls");
			cout << "Invalid password!\n";
			cout << "Password must be 8 to 20 characters.\n" << endl;
			cout << "Enter password: ";
			cin >> password;
		}
		return password;
	}
	static double enterBalance() {
		double balance;
		cout << "Enter balance: ";
		cin >> balance;
		while (balance < 1500) {
			system("cls");
			cout << "Invalid balance!\n";
			cout << "Balance must be at least 1500.\n" << endl;
			cout << "Enter balance: ";
			cin >> balance;
		}
		return balance;
	}
	static double enterSalary() {
		double salary;
		cout << "Enter salary: ";
		cin >> salary;
		while (salary < 5000) {
			system("cls");
			cout << "Invalid salary!\n";
			cout << "Salary must be at least 5000.\n" << endl;
			cout << "Enter salary: ";
			cin >> salary;
		}
		return salary;
	}

};

#endif // VALIDATION_H
