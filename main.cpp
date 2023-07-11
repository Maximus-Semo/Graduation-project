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


            FilesHelper::saveClient(a);
            FilesHelper::saveClient(b);
            FilesHelper::saveClient(c1);
            FilesHelper::saveClient(d);
            FilesHelper::saveClient(f);


            FilesHelper::getClients();
 // cout<<"_______________________________.! TEAM HUG FOR BUGS !.___________________________"<<endl;
  return 0;
};
