#ifndef VALIDATION_H
#define VALIDATION_H
#include <iostream>
#include <cctype>
using namespace std;


class Validation
{
    private:
    static string name;
    static string password;

public:
   static bool setName(string n) {
        if (n.size() < 5 || n.size() > 20) {
            cout << "Name size must be from 5 to 20 characters" << endl;
            return;
        }else{
            for (int i = 0; i < n.size(); i++) {
                if (!(isalpha(n[i]))) {
                    cout << "Name must contain only alphabetic characters" << endl;
                    return;
                }
            }
        }

        name = n;
    }

    static bool setPassword(string pw){
        if(pw.size() >= 8 && pw.size() <= 20){
            password = pw;
        }else{
            cout << "Invalid Password" << endl;
        }
    }
};

#endif // VALIDATION_H
