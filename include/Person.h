#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
#include<Validation.h>
using namespace std;

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
        if(Validation::setName(name)){
            this->name = name;
        }
        if(Validation::setPassword(password)){
            this->password = password;
        }
    }
    //Getter & setter
    void setId(int id){this->id = id;}
    void setName(string name){
        if(Validation::setName(name)){
            this->name = name;
        }
    }
    void setPassword(string password){
        if(Validation::setPassword(password)){
            this->password = password;
        }
    }
    int getId(){return id;}
    string getName(){return name;}
    string getPassword(){return password;}
    //Methods
    void display() {
		cout << "Your Id is : "  << this->id << endl;
		cout << "Your Password is : " << this->name << endl;
		cout << "Your Name is :  " << this->password << endl;
	}
    //Dist
    ~Person(){
        cout<<endl;
    }
};

#endif // PERSON_H
