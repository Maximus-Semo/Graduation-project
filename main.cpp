//classes
#include <Person.h>
#include <Client.h>
#include <Employee.h>
#include <Admin.h>
#include <Validation.h>
#include <FilesHelper.h>
#include <parser.h>
#include <FileManager.h>
#include <DataSourceInterface.h>
//end classes
//Libarly
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
//end Libarly
using namespace std;

int main() {
    // cout << "..-! TEAM HUG FOR BUGS !-.." << endl;
      Client a(1,"maximus","123312344",5000)
            ,b(1,"maximus","12341234",5000)
            ,c1(1,"MostafaElAraqy","14221234",6000)
            ,d(1,"Raina","34231234",5600)
            ,f(6,"MaxTestFilesManger","00000000",155555000);

            Employee p(6,"MaxTestFilesManger","00000000",155555000);
            cout << p.getId()<<endl;
/*
      Employee v(1,"qwerrqwer","123456793",5000),
      c(1,"Titfllass","123456793",5000);
      //this is creation files
      ofstream MyClient("Clients.txt");
      ofstream MyEmployee("Employee.txt");
      ofstream MyAdmin("Admin.txt");
      ofstream MyClientLastId("ClientLastId.txt");
      ofstream MyEmployeeLastId("EmployeeLastId.txt");
      ofstream MyAdminLastId("AdminLastId.txt");
      string fileName = "ClientLastId.txt";

      FilesHelper::saveLast(fileName,1);
      FilesHelper::saveClient(a);
      FilesHelper::saveClient(b);
      string fileLAstIdEmp = "EmployeeLastId.txt";
      string fileEmployee = "Employee.txt";
      FilesHelper::saveEmployeeOrAdmin(fileEmployee,fileLAstIdEmp,v);
      FilesHelper::saveEmployeeOrAdmin(fileEmployee,fileLAstIdEmp,c);
      MyClient.close();
      MyEmployee.close();
      MyAdmin.close();
      MyClientLastId.close();
      MyEmployeeLastId.close();
      MyAdminLastId.close();
*/
  /*
      FilesHelper::saveClient(a);
      FilesHelper::saveClient(b);
      FilesHelper::saveClient(c1);
      FilesHelper::saveClient(d);
      FilesHelper::saveClient(f);

      FilesHelper::getAdmins();
      FilesHelper::getEmployees();

  */
  /*
      FileManager objectFileManager;
      DataSourceInterface* ptr;
      ptr = &objectFileManager;
      ptr->getAllAdmins();
  */



 // cout<<"_______________________________.! TEAM HUG FOR BUGS !.___________________________"<<endl;
  return 0;
};
