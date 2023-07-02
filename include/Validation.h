#ifndef VALIDATION_H
#define VALIDATION_H
#include <iostream>
#include <cctype>
using namespace std;


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
};

#endif // VALIDATION_H
