#include<Person.h>
#include<Client.h>
#include <Employee.h>
#include <Admin.h>
#include<Validation.h>

#include <iostream>
#include <cctype>
#include <string>
using namespace std;
 string Validation::name = "";
 string Validation::password = "";



int main()
{
    Client a(1,"Maximus","12341111",5000);
    a.display();

  /*
    cout << "Team hug for bugs graduate project....!" << endl;
    Person a(1,"test","1234");
    cout<<a.getId()<<endl;
    cout<<a.getName()<<endl;
    cout<<a.getPassword()<<endl;
  */





   // cout << "Team hug for bugs graduate project..!" << endl;


  return 0;
}
