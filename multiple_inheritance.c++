#include<iostream>
using namespace std;
class father
{
    char name[20];
    int age;
    public:
    void getdata1();
    void display1();
};
void father::getdata1()
{
    cout<<"Enter the name of the father : ";
    cin>>name;
    cout<<"Enter the age of father :  ";
    cin>>age;
}
void father::display1()
{
    cout<<"Name of the father is "<<name<<endl;
    cout<<"age of the father is "<<age<<endl;
}
class mother
{
    char name[20];
    int age;
    public:
    void getdata2();
    void display2();
};
void mother::getdata2()
{
    cout<<"Enter the name of the mother : ";
    cin>>name;
    cout<<"Enter the age of the mother : ";
    cin>>age;
}
void mother ::display2()
{
    cout<<"Name of the mother is "<<name<<endl;
    cout<<"Ade of the mother is "<<age<<endl;
}
class son:public father,public mother
{
    char name[20];
    int age;
    public:
    void getdata3();
    void display3();
};
void son::getdata3()
{
    cout<<"Enter the name of the son : ";
    cin>>name;
    cout<<"Enter the age of the son : ";
    cin>>age;
    father::getdata1();
    mother::getdata2();
}
void son::display3()
{
    cout<<endl;
    cout<<"Name of the sonn is "<<name<<endl;
    cout<<"age of the son is "<<age<<endl;
    father::display1();
    mother::display2();
        
}
int main()
{
    son s;
    s.getdata3();
    s.display3();
    return 0;
}