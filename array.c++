#include<iostream>
using namespace std;
class employee
{
    int id;
    char name[30],dep[30];
    public:
    void getdata();
    void display();
};
void employee::getdata()
{
    cout<<"Enter the name of the employee : ";
    cin>>name;
    cout<<"Enter the id of the employee : ";
    cin>>id;
    cout<<"Enter the department of the employee ";
    cin>>dep;
    cout<<endl;
}
void employee::display()
{
    cout<<"Name of the employee is "<<name<<endl;
    cout<<"Id of the employee is "<<id<<endl;
    cout<<"Department of the employee is "<<dep<<endl;
    cout<<endl;
}
int main()
{    
    int limit,i;
    employee emp[30];
    cout<<"Enter the limit : ";
    cin>>limit;
    for(i=1;i<=limit;i++)
    {
    emp[i].getdata();
    }   
    for(i=1;i<=limit;i++)
    {
    emp[i].display();
    }  
    return 0;

}



