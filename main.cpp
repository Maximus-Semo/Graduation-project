//classes

#include "Person.h"
#include "Admin.h"
#include "Validation.h"
#include "FilesHelper.h"
#include "parser.h"
#include "DataSourceInterface.h"
#include "FileManager.h"
#include "ClientManager.h"
#include "Client.h"
#include "Employee.h"
#include "Screens.h"

//end classes
//Libarly
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
//end Libarly
using namespace std;

int main() {
   Screens s;
   s.BankName();
   s.RunApp();


  cout<<"-------------------.! TEAM HUG FOR BUGS !.-------------------"<<endl;
  cout<<"Developers->"<<endl;
  cout<< "ENG: "<<"Maximus"<<endl<<"ENG: " <<"Rania "<<endl<<"ENG: "<<"Ahmed"<<endl<<"ENG: " <<"Mohamed"<<endl<<"ENG: " << "Mostafa";

  return 0;
}
