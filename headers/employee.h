#include<iostream>
#include<stdlib.h>
using namespace std;
///employee header
class Employee
{
    public:
        int empId;
        string empName;
        float sal;
        void setData();
        void display();
        void writeDataToFile();
};

void Employee::setData()
{
    cout<<"\n Enter EMPID       =  ";
    cin>>empId;
    cin.ignore();
    cout<<"\n Enter EMPNAME     =  ";
    getline(cin,empName);
    cout<<"\n Enter EMPSAL      =  ";
    cin>>sal;
}

void Employee::display()
{
    cout<<"\n EMPID     = "<<empId;
    cout<<"\n EMPNAME   = "<<empName;
    cout<<"\n EMPSAL    = "<<sal<<endl;
}
void writeDataToFile()
{
    //will do this later
}



