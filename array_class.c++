#include<iostream>
using namespace std;
class employee
{
    int salary;
    char name[20];
    public:
    void getdata();
    void display();
};
void employee::getdata()
{
    cout<<"Enter the name of the employee : ";
    cin>>name;
    cout<<"Enter the salary of the employee : ";
    cin>>salary;
}
void employee::display()
{
    cout<<"Name of the employee is "<<name<<endl;
    cout<<"Salary of the employee is "<<salary<<endl;
}
int main()
{
    int limit,i;
    cout<<"Ente the limit you want : ";
    cin>>limit;
    employee emp[20];
    for( i=1;i<=limit;i++)
    {
    emp[i].getdata();
    }
    for( i=1;i<=limit;i++)
    {
    emp[i].display();
    }
    return 0;
}
