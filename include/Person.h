#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

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
        this->name = name;
        this->password = password;
    }
    //Getter & setter
    void setId(int id){this->id = id;}
    void setName(string name){this->name = name;}
    void setPassword(string password){this->password = password;}
    int getId(){return id;}
    string getName(){return name;}
    string getPassword(){return password;}
    //Methods

    //Dist
    ~Person(){
        cout<<endl;
    }
};

#endif // PERSON_H
