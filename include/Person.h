#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include "Validation.h"


class Person{
//Data Memebrs
protected:
    int id = 0;
    string name = "";
    string password = "";
public:
    //Cons
    Person(){}
    Person(int id, string name, string password){
        this->id = id;
        setName(name);
        setPassword(password);
    }
    //Getter & setter
    void setId(int id){
        this->id = id;
    }

    void setName(string name){
        while(true){
            if(Validation::setName(name)){
            this->name = name;
            break;
        } else {
            cout<<"Invalid name"<<endl;
            cout<<"Enter Valid Name(No space in Name:)";
            cin>>name;
        }

        }

    }
    //check on this shut
    void setPassword(string password){
        while(true){
        if(Validation::setPassword(password)){
            this->password = password;
            break;
        } else {
            cout<<"Invalid password"<<endl;
            cout<<"Enter Valid Password(No space in password:)";
            cin>>password;
        }

        }
    }

    int getId(){return id;}
    string getName(){return name;}
    string getPassword(){return password;}
    //Methods
    void display() {
		cout << "Your Id is : "  << this->id << endl;
		cout << "Your Name is :  " << this->name << endl;
		cout << "Your Password is : " << this->password<< endl;
	}
    //Dist
    ~Person(){}
};

#endif // PERSON_H
