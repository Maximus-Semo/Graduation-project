#ifndef DATASOURCEINTERFACE_H
#define DATASOURCEINTERFACE_H

#include <iostream>
#include <vector>
#include <Admin.h>
#include <Client.h>
#include <Employee.h>


class DataSourceInterface
{
    private:
        virtual void addClient(Client c) = 0;
        virtual void addEmployee(Employee e) = 0;
        virtual void addAdmin(Admin a) = 0;
        virtual std::vector<Client> getAllClients() = 0;
        virtual std::vector<Employee> getAllEmployees() = 0;
        virtual std::vector<Admin> getAllAdmins() = 0;
        virtual void removeAllClients() = 0;
        virtual void removeAllEmployees() = 0;
        virtual void removeAllAdmins() = 0;
};

#endif // DATASOURCEINTERFACE_H
