#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    char dep[20];
    void getdata1();
    void display1();
};
void employee::getdata1()
{
    cout<<"Enter the id of the employee : ";
    cin>>id;
    cout<<"Enter the department name of the employee :";
    cin>>dep;
}
void employee::display1()
{
    cout<<"Id of the employee is "<<id<<endl;
    cout<<"Department of the employee is "<<dep<<endl;
}
class details : public employee
{    
    int age ;
    public:
    char name[30];
    void getdata2();
    void display2();
};
void details::getdata2()
{
    cout<<"Enter the name of the employee : ";
    cin>>name;
    cout<<"Enter the age of the employee : ";
    cin>>age;
}
void details::display2()
{
    cout<<"Name of the employee is "<<name<<endl;
    cout<<"Age of the employee is "<<age<<endl;
}
int main()
{   
    details det;
    det.getdata2();
    det.getdata1();
    det.display2();
    det.display1();
    return 0;
}