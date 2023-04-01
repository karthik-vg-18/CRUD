#include<iostream>
#include "employee.h"
#include<list>
using namespace std;

void createEmployee(list<Employee>  &EmpList)
{
    Employee ob;
    ob.setData();
    EmpList.push_back(ob);
}


void displayEmployee(list<Employee> &EmpList)
{
    Employee ob;
    list<Employee>::iterator iter;
    for(iter = EmpList.begin();iter!=EmpList.end();++iter)
    {
        ob = *iter;
        ob.display();
    }
}

Employee* searchEmployee(list<Employee> &EmpList,int id)
{
    Employee ob;
    list<Employee>::iterator iter;
    for(iter = EmpList.begin();iter!=EmpList.end();++iter)
    {
        ob = *iter;
        if(iter->empId == id)
            return &ob;
    }
    return NULL;
}

void updateEmployee(list<Employee> &EmpList,int id)
{
    Employee *ob;
    list<Employee>::iterator iter;
    for(iter = EmpList.begin();iter!=EmpList.end();++iter)
    {

        if(iter->empId == id )
            {
                cout<<"\n Enter EMPID       =  ";
                cin>>iter->empId;
                cin.ignore();
                cout<<"\n Enter EMPNAME     =  ";
                getline(cin,iter->empName);
                cout<<"\n Enter EMPSAL      =  ";
                cin>>iter->sal;
            }
    }

}

void deleteEmployee(list<Employee> &EmpList,int id)
{
    int flag=1;
    Employee ob;
    list<Employee>::iterator iter;
    for(iter = EmpList.begin();iter!=EmpList.end();++iter)
    {
        ob = *iter;
        if(ob.empId == id)
            {
                iter = EmpList.erase(iter);
                flag=0;
            }
    }
    if(flag==1)
        cout<<"\n the emp id does not exist";

}

