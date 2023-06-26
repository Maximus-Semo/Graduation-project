#include <iostream>
#include <string>
using namespace std;
class Person{
//Data Member
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
class Employee : public Person{
    protected:
    double salary;
    public:
    //check if string of name is alphabetic char only
    bool containsOnlyLetters(string const str) {
    return str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ") ==
        string::npos;
}
        void setName(string name){
            if(containsOnlyLetters(name)==false){
                cout<<"Please input correct name with contain alphabetic char...."<<endl;
                getline(cin, name);
                return setName(name);
            }
            if(name.size()<5){
                cout << "The size of the Name is less than 5" << endl;
                getline(cin, name);
                return setName(name);
            }else if(name.size()>20){
                cout << "The size of the Name is max than 20" << endl;
                getline(cin, name);
                return setName(name);
            }else{
                this->name=name;
            }
        }
        void setPassword(string pass){
            if(pass.size()<5){
                cout << "The size of the password is less than 8" << endl;
                getline(cin, pass);
                return setPassword(pass);
            }else if(pass.size()>20){
                cout << "The size of the password is less than 20" << endl;
                getline(cin, pass);
                return setPassword(pass);
            }else{
                password = pass;
            }
    }
    void setSalary(double s){
        if(s<5000){
                cout << "min mum of salary is : 5000" << endl;
                cin >> s;
                return setSalary(s);
        }
        salary = s;
    }
    string getName(){
        return name;
    }
    string getPassword(){
        return password;
    }
    double getSalary(){
        return salary;
    }
    void setID(int ID) { id = ID; }
    int getId(){return id;}
    void print(){
        cout << "-----------------------------------------------------" << endl;
        cout << "==================== print data:-====================" << endl;
        cout << "Your Name is : " << getName() << endl;
        cout << "Your Password is: "<<getPassword()<<endl;
        cout << "Your Id is : " << getId() << endl;
        cout << "Your Salary is : " << getSalary() << endl;
        cout << "-----------------------------------------------------" << endl;
    }
    Employee(){}
    Employee(int id,
    string name,
    string password,
    double salary){
        setID(id);
        setName(name);
        setPassword(password);
        setSalary(salary);
    }
};
int main(){
    //take object
    string name;
    string pass;
    double salary;
    int id;
    Employee e;
    //Enter name
    cout << "Enter your name : " << endl;
    getline(cin, name);
    e.setName(name);
    //Enter password
    cout << "Enter your password : " << endl;
    getline(cin, pass);
    e.setPassword(pass);
    //Enter salary
    cout << "Enter Salary : " << endl;
    cin >> salary;
    e.setSalary(salary);
    //enter id
    cout <<"Enter Your ID :" ;
    cin>>id;
    e.setID(id);
    e.print();
}
