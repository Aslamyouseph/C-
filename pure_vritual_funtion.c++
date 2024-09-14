#include<iostream>
using namespace std;
class employee
{
    public:
    char name[20];
    virtual void getdata();
    virtual void display();
};
class salary:public employee
{
    int salary;
    void getdata();
    void display();
};
void employee::getdata()
{

}
void employee::display()
{

}
void salary::getdata()
{
    cout<<"Enter the name of the employee :  ";
    cin>>name;
    cout<<"Enter the salary of the employee : ";
    cin>>salary;
}
void salary::display()
{
    cout<<"Name of the employee is : "<<name<<endl;
    cout<<"Slary of the employee is : "<<salary<<endl;
}
int main ()
{
    employee *ptr;
    salary base;
    ptr=&base;
    ptr->getdata();
    ptr->display();
    return 0;
}