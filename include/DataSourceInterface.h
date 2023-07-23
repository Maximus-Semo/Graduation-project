#ifndef DATASOURCEINTERFACE_H
#define DATASOURCEINTERFACE_H

#pragma once
#include <iostream>
#include <string>

#include "Admin.h"
#include "Client.h"
#include "Employee.h"

class DataSourceInterface
{
    protected:
         static void addClient(Client c);
         static void addEmployee(Employee e);
         static void addAdmin(Admin a);
         static void getAllClients();
         static void getAllEmployees();
         static void getAllAdmins();
         static void removeAllClients();
         static void removeAllEmployees();
         static void removeAllAdmins();
};

#endif // DATASOURCEINTERFACE_H
