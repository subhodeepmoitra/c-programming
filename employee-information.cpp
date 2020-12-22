//C++ program to read and print employee information using mustiple inheritance.
#include<iostream>
#include<stdio.h>
using namespace std;
//base class basicinfo
class basicinfo
{
    protected:
        char name[50];
        char employeeID[50];
        char airlines[50];
    public:
        void getBasicInfo(void)
        {
            cout << "Name of the crew: ";
            cin.getline(name,50);
            fflush(stdin);
            cout << "Employee number: ";
            cin.getline(employeeID,50);
            fflush(stdin);
            cout << "Airlines: ";
            cin.getline(airlines,50);
            fflush(stdin);
        }
};
//base class deptInfo
class deptInfo
{
    protected:
        char deptname[50];
        char designation[50];
        int yearsofservice;
    public:
        void getDeptInfo(void)
        {
            cout << "Department: ";
            cin.ignore(1);
            cin.getline(deptname,50);
            fflush(stdin);
            cout << "Designation: ";
            cin.getline(designation,50);
            cout << "\nYears in service: ";
            cin >> yearsofservice;
        }
};
//final class (derived class) - employee
class employee : private basicinfo , private deptInfo
{
    public:
        void getEmployeeInfo(void)
        {
            cout << "Enter Basic Information........." << endl;
            getBasicInfo();
            cout << "\nEnter Departmental Informations........" << endl;
            getDeptInfo();
        }
        void printEmployeeInfo(void)
        {
            cout << "Employee's Information is: " << endl;
            cout << "Basic Informations...." << endl;
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << employeeID << endl;
            cout << "Airlines: " << airlines << endl;
            cout << "Departmental Informations...." << endl;
            cout << "Department Name: " << deptname << endl;
            cout << "Designation: " << designation << endl;
            cout << "Years in service: " << yearsofservice << endl;
        }
};
int main()
{
    employee obj;
    obj.getEmployeeInfo();
    obj.printEmployeeInfo();
    return 0;
}