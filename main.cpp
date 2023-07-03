#include<Person.h>
#include <Client.h>
#include <Employee.h>
#include <Admin.h>
#include <Validation.h>

#include <iostream>

#include <string>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
  //  Admin a(1,"maximus","1234",5000); a.display();

      ofstream MyWriteClient("Clients.txt");
      ofstream MyWriteEmployee("Employee.txt");
      ofstream MyWriteAdmin("Admin.txt");
      MyWriteClient << "MyClient*test";
      MyWriteEmployee << "MyEmployee*test";
      MyWriteAdmin << "MyAdmin*test";
      MyWriteClient.close();
      MyWriteEmployee.close();
      MyWriteAdmin.close();

      string myText;
      ifstream MyReadClient("Clients.txt");
      ifstream MyReadEmployee("Employee.txt");
      ifstream MyReadAdmin("Admin.txt");
      while(getline (MyReadClient, myText)){
        cout << myText;
      }
      cout<<endl;
      while(getline (MyReadEmployee, myText)){
        cout << myText;
      }
      cout<<endl;
      while(getline (MyReadAdmin, myText)){
        cout << myText;
      }
   // cout << "Team hug for bugs graduate project..!" << endl;


  return 0;
}
