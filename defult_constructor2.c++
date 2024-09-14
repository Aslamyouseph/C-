#include<iostream>
using namespace std;
class employee
{
    public:
    int salary;
    char name[20];
    employee()
    {
        cout<<"Ente the name of the employee : ";
        cin>>name;
        cout<<"Ente the salary of the employee : ";
        cin>>salary;
    }
    void display();
};
void employee::display()
{
    cout<<"Name of the employee is "<<name<<endl;
    cout<<"Salary of the employee is "<<salary<<endl;
}
int main()
{
    employee emp;
    emp.display();
    return(0);
}